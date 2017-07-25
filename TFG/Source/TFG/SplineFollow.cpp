// Fill out your copyright notice in the Description page of Project Settings.

#include "TFG.h"
#include "SplineFollow.h"


USplineFollow::USplineFollow()
{
	active = true;
}

bool USplineFollow::GetActive()
{
	return active;
}

