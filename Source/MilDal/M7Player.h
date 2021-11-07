#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "M7Player.generated.h"

UCLASS()
class MILDAL_API AM7Player : public ACharacter
{
    GENERATED_BODY()

public:
    AM7Player();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
