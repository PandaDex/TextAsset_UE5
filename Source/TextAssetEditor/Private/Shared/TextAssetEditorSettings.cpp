// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "TextAssetEditorSettings.h"

#include "Misc/Paths.h"


UTextAssetEditorSettings::UTextAssetEditorSettings()
	: BackgroundColor(FLinearColor::Gray)
	, ForegroundColor(FLinearColor::White)
	, Font(FSlateFontInfo(FPaths::EngineContentDir() / TEXT("Slate/Fonts/DroidSansMono.ttf"), 14))
	, Margin(4.0f)
{ }
