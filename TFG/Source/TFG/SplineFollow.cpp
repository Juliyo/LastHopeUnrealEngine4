// Fill out your copyright notice in the Description page of Project Settings.

#include "TFG.h"
#include "SplineFollow.h"


/*USplineFollow::USplineFollow()
{
	active = true;
}*/

USplineFollow::USplineFollow()
{

	//Super::USplineComponent();

	PrimaryComponentTick.bCanEverTick = true;
	//PrimaryComponentTick.TickGroup = ETickingGroup::TG_PrePhysics;

	active = true;
	FollowRotation = false;
	Velocity = 5.f;
	Loop = true;
	StartActive = true;
	PositiveDirection = true;


}

bool USplineFollow::IsActive()
{
	return active;
}

void USplineFollow::StopFollow()
{
	active = false;
}

void USplineFollow::PauseFollow()
{
	active = false;
}

void USplineFollow::ResumeFollow()
{
	active = false;
}
float USplineFollow::GetSplineDistance() 
{
	return SplineDistance;
}

void USplineFollow::SetSplineDistance(float distance)
{
	SplineDistance = distance;
}

float USplineFollow::GetVelocity()
{
	return Velocity;
}


//void USplineFollow::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction * ThisTickFunction)
//{
//	/*//Obtenemos el actor que hay que mover
//	AActor* actor = GetOwner();
//
//	//Obtenemos la localizacion a la que hay que moverse y movemos el actor
//	FVector newLocation = GetLocationAtDistanceAlongSpline(SplineDistance, ESplineCoordinateSpace::Type::World);
//	actor->SetActorLocation(newLocation);
//
//	//Si estamos siguiendo la rotacion rotamos
//	if (FollowRotation) {
//		FRotator newRotation = GetRotationAtDistanceAlongSpline(SplineDistance, ESplineCoordinateSpace::Type::World);
//		actor->SetActorRotation(newRotation);
//	}
//
//	if (PositiveDirection) {
//		SplineDistance += Velocity;
//	}
//	else {
//		SplineDistance -= Velocity;
//	}*/
//}