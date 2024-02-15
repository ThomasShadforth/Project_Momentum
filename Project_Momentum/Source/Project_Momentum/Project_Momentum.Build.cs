// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Project_Momentum : ModuleRules
{
	public Project_Momentum(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
