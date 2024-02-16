#pragma once

#include "CoreMinimal.h"
#include "Subsystems/Subsystem.h"
#include "Sound/SoundCue.h"
#include "Kismet/GameplayStatics.h"
#include "SoundSubsystem.generated.h"

UCLASS()
class APPLEPICKERV2_API USoundSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Sound")
	void SetSoundMap(TMap<FName, USoundCue*> newTMap);
	UFUNCTION(BlueprintCallable, Category = "Sound")
	void PlaySound(FName name);

private:
	TMap<FName, USoundCue*> soundMap;
};
