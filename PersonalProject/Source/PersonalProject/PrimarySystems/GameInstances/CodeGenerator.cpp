#include "CodeGenerator.h"

UCodeGenerator::UCodeGenerator()
{
	GenerateRandomCode();
}

void UCodeGenerator::GenerateRandomCode()
{
	RandomCode = FMath::RandRange(1000, 9999);
}

int32 UCodeGenerator::GetRandomCode()
{
	return RandomCode;
}
