// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Arriett_Go : ModuleRules
{
	public Arriett_Go(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

<<<<<<< HEAD
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput", "GameplayTasks", "UMG", "EnhancedInput" });
=======
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput", "UMG"});
>>>>>>> main
    }
}
