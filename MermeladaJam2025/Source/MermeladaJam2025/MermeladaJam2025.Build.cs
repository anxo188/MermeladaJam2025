// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MermeladaJam2025 : ModuleRules
{
	public MermeladaJam2025(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput" });
    }
}
