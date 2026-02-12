using UnrealBuildTool;
using System.IO;

public class AssetMetaExplorerBridge : ModuleRules
{
    public AssetMetaExplorerBridge(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "UnrealEd",
            "Projects",
            "AssetRegistry",
            "ContentBrowser",
            "RenderCore",
            "RHI",
            "ImageWrapper",
            "Json",
            "JsonUtilities",
            "Slate",
            "SlateCore",
            "Niagara"
            ,"PhysicsCore",
            "HTTP",
            "DeveloperSettings",
            "HttpServer"
        });

        PrivateIncludePaths.AddRange(new string[]
        {
            Path.Combine(ModuleDirectory, "Private"),
            Path.Combine(ModuleDirectory, "Private", "ThirdParty", "blake3"),
            Path.Combine(ModuleDirectory, "Private", "ThirdParty", "LibWebP", "include")
        });

        PublicAdditionalLibraries.AddRange(new string[]
        {
            Path.Combine(ModuleDirectory, "Private", "ThirdParty", "LibWebP", "lib", "libwebp.lib"),
            Path.Combine(ModuleDirectory, "Private", "ThirdParty", "LibWebP", "lib", "libwebpmux.lib"),
            Path.Combine(ModuleDirectory, "Private", "ThirdParty", "LibWebP", "lib", "libwebpdemux.lib")
        });

        // BLAKE3: We only need a stable hash, not maximum SIMD throughput.
        // The bundled sources currently include the portable implementation but not
        // the optional SIMD translation units (sse2/sse41/avx2/avx512). On MSVC this
        // can lead to unresolved externals from blake3_dispatch.c.
        // Force the portable path by disabling SIMD dispatch.
        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PrivateDefinitions.AddRange(new string[]
            {
                "BLAKE3_NO_SSE2",
                "BLAKE3_NO_SSE41",
                "BLAKE3_NO_AVX2",
                "BLAKE3_NO_AVX512"
            });
        }

        // Some engine versions warn on deprecated material APIs; treat warnings normally.
        bUseUnity = false;
    }
}
