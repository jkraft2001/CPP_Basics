// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CodeCamp_CPP : ModuleRules
{
	public CodeCamp_CPP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
