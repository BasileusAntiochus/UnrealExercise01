// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealExercise01 : ModuleRules
{
	public UnrealExercise01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
