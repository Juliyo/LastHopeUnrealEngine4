// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Components/SplineComponent.h"
#include "SplineFollow.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = Utility, ShowCategories = (Mobility), HideCategories = (Physics, Collision, Lighting, Rendering, Mobile), meta = (BlueprintSpawnableComponent))
class TFG_API USplineFollow : public USplineComponent
{
	GENERATED_BODY()
public:
	USplineFollow();
	
	UFUNCTION(BlueprintPure, Category = "FollowSpline")
	bool GetActive();

protected:
	bool active;
};
