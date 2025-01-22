#pragma once

#include "CoreMinimal.h"
#include "GUIBase.h"
#include "KeyPadUI.generated.h"

class UHorizontalBox;
class UVerticalBox;
class UEditableTextBox;
class UButton;

class UCodeGenerator;

UCLASS()
class PERSONALPROJECT_API UKeyPadUI : public UGUIBase
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

public:
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UVerticalBox* VerticalBox;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UHorizontalBox* HorizontalBox1;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UHorizontalBox* HorizontalBox2;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UHorizontalBox* HorizontalBox3;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UHorizontalBox* HorizontalBox4;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UHorizontalBox* HorizontalBox5;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UEditableTextBox* Screen;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* key0;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* key1;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* key2;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* key3;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* key4;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* key5;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* key6;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* key7;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* key8;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* key9;

public:
	UFUNCTION()
	void Key0Press();

	UFUNCTION()
	void Key1Press();

	UFUNCTION()
	void Key2Press();

	UFUNCTION()
	void Key3Press();

	UFUNCTION()
	void Key4Press();

	UFUNCTION()
	void Key5Press();

	UFUNCTION()
	void Key6Press();

	UFUNCTION()
	void Key7Press();

	UFUNCTION()
	void Key8Press();

	UFUNCTION()
	void Key9Press();

private:
	TArray<int32> PassCode;
	TArray<AActor*> Doors;
	UCodeGenerator* Code;
};
