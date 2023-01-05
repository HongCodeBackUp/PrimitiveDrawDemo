// Copyright (c) 2023, Hong Gu <guhong.usa@gmail.com>. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrimitiveDrawActor.generated.h"

class UPrimitiveDrawComponent;

UCLASS()
class PRIMITIVEDRAWDEMO_API APrimitiveDrawActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APrimitiveDrawActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	UPrimitiveDrawComponent* PrimitiveDrawComp;


};
