// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Somnium_Dev_TT : ModuleRules
{
	public Somnium_Dev_TT(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
