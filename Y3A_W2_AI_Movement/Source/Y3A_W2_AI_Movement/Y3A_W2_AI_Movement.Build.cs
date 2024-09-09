// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Y3A_W2_AI_Movement : ModuleRules
{
	public Y3A_W2_AI_Movement(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
