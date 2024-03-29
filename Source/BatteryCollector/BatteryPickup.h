// © Jankka89

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class BATTERYCOLLECTOR_API ABatteryPickup : public APickup
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ABatteryPickup();

	// Override the WasCollected function - use Implementation because it's a Blueprint Native Event
	void WasCollected_Implementation() override;

	// The public way to access the battery's power level
	float GetPower();

	// The public way to set the Good/Bad battery boolean
	void SetBadBattery();

	// The public way to get the Good/Bad battery
	bool GetBadBattery();

protected:
	// Set the amount of power the battery gives to the character
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
		float BatteryPower;
	// Set the good/bad battery
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
		bool BadBattery;


};
