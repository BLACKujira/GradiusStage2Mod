using UnrealBuildTool;

public class RTypeFinal2 : ModuleRules {
    public RTypeFinal2(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimationBudgetAllocator",
            "Core",
            "CoreUObject",
            "Engine",
            "HairStrandsCore",
            "InputCore",
            "LevelSequence",
            "Niagara",
            "OnlineSubsystemUtils",
            "SCUE4",
            "UMG",
        });
    }
}
