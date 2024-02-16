#include "SoundSubsystem.h"

void USoundSubsystem::SetSoundMap(TMap<FName, USoundCue*> newMap)
{
	soundMap = newMap;
}

void USoundSubsystem::PlaySound(FName name)
{
	if (!soundMap[name])
	{
		GEngine->AddOnScreenDebugMessage(1, 5, FColor::Cyan, "Can't find a sound!");
		return;
	}
	UGameplayStatics::PlaySound2D(GetWorld(), soundMap[name]);
}
