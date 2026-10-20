


#include "Character/AuraEnemyCharacter.h"

#include "Components/SkeletalMeshComponent.h"


AAuraEnemyCharacter::AAuraEnemyCharacter()
{
	GetMesh()->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
}

void AAuraEnemyCharacter::HighlightActor()
{
	bHighlighted = true;
	GetMesh()->SetRenderCustomDepth(true);
	GetMesh()->SetCustomDepthStencilValue(HighLightCustomDepthStencilValue);
	Weapon->SetRenderCustomDepth(true);
	Weapon->SetCustomDepthStencilValue(HighLightCustomDepthStencilValue);
}

void AAuraEnemyCharacter::UnHighlightActor()
{
	bHighlighted = false;
	GetMesh()->SetRenderCustomDepth(false);
	Weapon->SetRenderCustomDepth(false);
}
