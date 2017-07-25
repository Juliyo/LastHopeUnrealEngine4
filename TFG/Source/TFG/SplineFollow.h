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
	bool IsActive();

	UFUNCTION(BlueprintCallable, Category = "FollowSpline")
	void StopFollow();

	UFUNCTION(BlueprintCallable, Category = "FollowSpline")
	void PauseFollow();

	UFUNCTION(BlueprintCallable, Category = "FollowSpline")
	void ResumeFollow();

	UFUNCTION(BlueprintPure, Category = "FollowSpline")
	float GetSplineDistance();

	UFUNCTION(BlueprintCallable, Category = "FollowSpline")
	void SetSplineDistance(float distance);

	UFUNCTION(BlueprintPure, Category = "FollowSpline")
	float GetVelocity();

	//virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction) override;

	/* Si es true el actor empieza moviendose por la spline*/
	UPROPERTY(EditAnywhere, Category = SplineFollow)
	bool StartActive;

	/* Si es true el actor seguira la rotacion de la spline*/
	UPROPERTY(EditAnywhere, Category = SplineFollow)
	bool FollowRotation;

	/* Factor de velocidad a la que se mueve por la spline */
	UPROPERTY(EditAnywhere, Category = SplineFollow)
	float Velocity;

	/* Determina si loopeamos al llegar al final de la spline */
	UPROPERTY(EditAnywhere, Category = SplineFollow)
	bool Loop;

private:
	/* Determina si se esta recorriendo la spline */
	bool active;

	/* Distancia actual recorrida a lo largo de la spline */
	float SplineDistance;

	/* Si estamos recorriendo la spline en sentido positivo o en sentido negativo */
	bool PositiveDirection;


};
