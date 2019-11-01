 // © Jankka89


#include "BatteryPickup.h"
#include "Components/StaticMeshComponent.h"


// Set default values
ABatteryPickup::ABatteryPickup() 
{
	GetMesh()->SetSimulatePhysics(true);

	// The base power level of the battery
	BatteryPower = 150.f;
}

void ABatteryPickup::WasCollected_Implementation() 
{
	// Use the base pickup behavior
	Super::WasCollected_Implementation();

	// Destroy the battery
	Destroy();
}

// report the power level of the battery
float ABatteryPickup::GetPower()
{
	return BatteryPower;
}