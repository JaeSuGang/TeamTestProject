// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TeamTestProject : ModuleRules
{
	public TeamTestProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "GameplayTags" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
