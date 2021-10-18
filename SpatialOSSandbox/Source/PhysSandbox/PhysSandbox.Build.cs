// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class PhysSandbox : ModuleRules
{
	public PhysSandbox(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"OnlineSubsystem",
			"Sockets",
			"OnlineSubsystemUtils",
			"SpatialGDK"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {  });
	}
}
