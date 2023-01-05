// Copyright (c) 2023, Hong Gu <guhong.usa@gmail.com>. All Rights Reserved.

#include "PrimitiveDrawActor.h"
#include "PrimitiveDrawComponent.h"


// Sets default values
APrimitiveDrawActor::APrimitiveDrawActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	PrimitiveDrawComp = CreateDefaultSubobject<UPrimitiveDrawComponent>("PrimitiveDrawComp");
	RootComponent = PrimitiveDrawComp;

}

// Called when the game starts or when spawned
void APrimitiveDrawActor::BeginPlay()
{
	Super::BeginPlay();
	
}
