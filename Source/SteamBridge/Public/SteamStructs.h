// Copyright 2020-2022 Russ 'trdwll' Treadwell <trdwll.com>. All Rights Reserved.

#pragma once

#include <CoreMinimal.h>

#include "Steam.h"
#include "SteamEnums.h"

#include "SteamStructs.generated.h"

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FUint64
{
	GENERATED_BODY()

	uint64 Value = 0;

	operator uint64() { return Value; }
	operator uint64() const { return Value; }

	bool operator==(const FUint64 Other) const { return Value == Other; }
	bool operator!=(const FUint64 Other) const { return Value != Other; }

	FUint64() = default;
	FUint64(const uint64 value) : Value(value) {}
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FUint32
{
	GENERATED_BODY()

	uint32 Value = 0;

	operator uint32() { return Value; }
	operator uint32() const { return Value; }

	bool operator==(const FUint32 Other) const { return Value == Other; }
	bool operator!=(const FUint32 Other) const { return Value != Other; }

	FUint32() = default;
	FUint32(const uint32 value) : Value(value) {}
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FInt32
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "SteamBridgeCore")
	int32 Value = 0;

	operator int32() { return Value; }
	operator int32() const { return Value; }

	bool operator==(const FInt32 Other) const { return Value == Other; }
	bool operator!=(const FInt32 Other) const { return Value != Other; }

	FInt32() = default;
	FInt32(const int32 InValue) : Value(InValue) {}
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FInt16
{
	GENERATED_BODY()

	int16 Value = 0;

	operator int16() { return Value; }
	operator int16() const { return Value; }

	bool operator==(const FInt16 Other) const { return Value == Other; }
	bool operator!=(const FInt16 Other) const { return Value != Other; }

	FInt16() = default;
	FInt16(const int16 InValue) : Value(InValue) {}
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FHServerListRequest
{
	GENERATED_BODY()

	void* Value = nullptr;

	FHServerListRequest() = default;
	FHServerListRequest(void* InValue) : Value(InValue) {}
};

USTRUCT(BlueprintType, meta = (HasNativeMake = "SteamBridge.SteamBPUtils.MakeSteamID", HasNativeBreak = "SteamBridge.SteamBPUtils.BreakSteamID"))
struct STEAMBRIDGE_API FSteamID : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;

	operator CSteamID() const { return CSteamID(Value); }
	bool IsValid() const { return CSteamID(Value).IsValid(); }
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamAPICall : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamItemInstanceID : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamInventoryUpdateHandle : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FHAuthTicket : public FUint32
{
	GENERATED_BODY()
	using FUint32::FUint32;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FHSteamUser : public FUint32
{
	GENERATED_BODY()
	using FUint32::FUint32;
};
USTRUCT(BlueprintType, meta = (HasNativeMake = "SteamBridge.SteamBPUtils.MakeAppID", HasNativeBreak = "SteamBridge.SteamBPUtils.BreakAppID"))
struct STEAMBRIDGE_API FAppID : public FUint32
{
	GENERATED_BODY()
	using FUint32::FUint32;
};
USTRUCT(BlueprintType, meta = (HasNativeMake = "SteamBridge.SteamBPUtils.MakeAccountID", HasNativeBreak = "SteamBridge.SteamBPUtils.BreakAccountID"))
struct STEAMBRIDGE_API FAccountID : public FUint32
{
	GENERATED_BODY()
	using FUint32::FUint32;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FScreenshotHandle : public FUint32
{
	GENERATED_BODY()
	using FUint32::FUint32;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamFriendsGroupID : public FInt16
{
	GENERATED_BODY()
	using FInt16::FInt16;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamInventoryResult : public FInt32
{
	GENERATED_BODY()
	using FInt32::FInt32;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamItemDef : public FInt32
{
	GENERATED_BODY()
	using FInt32::FInt32;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FHServerQuery : public FInt32
{
	GENERATED_BODY()
	using FInt32::FInt32;
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FInputActionSetHandle : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FInputAnalogActionHandle : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FInputDigitalActionHandle : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FInputHandle : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FPartyBeaconID : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FUGCHandle : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};

USTRUCT(BlueprintType, meta = (HasNativeMake = "SteamBridge.SteamBPUtils.MakePublishedFileId"))
struct STEAMBRIDGE_API FPublishedFileId : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FPublishedFileUpdateHandle : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FUGCFileWriteStreamHandle : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamLeaderboardEntries : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamLeaderboard : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FUGCQueryHandle : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FUGCUpdateHandle : public FUint64
{
	GENERATED_BODY()
	using FUint64::FUint64;
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FHTTPCookieContainerHandle : public FUint32
{
	GENERATED_BODY()
	using FUint32::FUint32;
};
USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FHTTPRequestHandle : public FUint32
{
	GENERATED_BODY()
	using FUint32::FUint32;
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FHHTMLBrowser : public FUint32
{
	GENERATED_BODY()
	using FUint32::FUint32;
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamInputAnalogActionData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	ESteamControllerSourceMode Mode = ESteamControllerSourceMode::None;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	float X = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	float Y = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	bool bActive = false;

	FSteamInputAnalogActionData() = default;
	FSteamInputAnalogActionData(const ESteamControllerSourceMode mode, const float x, const float y, const bool bactive) : Mode(mode), X(x), Y(y), bActive(bactive) {}

	bool operator==(const FSteamInputAnalogActionData& Other) const { return Mode == Other.Mode && X == Other.X && Y == Other.Y && bActive == Other.bActive; }
	bool operator!=(const FSteamInputAnalogActionData& Other) const { return !(*this == Other); }
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamInputDigitalActionData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	bool bState = false;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	bool bActive = false;

	FSteamInputDigitalActionData() = default;
	FSteamInputDigitalActionData(bool bstate, bool bactive) : bState(bstate), bActive(bactive) {}

	bool operator==(const FSteamInputDigitalActionData& Other) const { return bState == Other.bState && bActive == Other.bActive; }
	bool operator!=(const FSteamInputDigitalActionData& Other) const { return !(*this == Other); }
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamInputMotionData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FQuat RotQuat = FQuat::Identity;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FVector PosAccel = FVector::ZeroVector;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FVector RotVel = FVector::ZeroVector;

	FSteamInputMotionData() = default;
	FSteamInputMotionData(const FQuat& quat, const FVector& pos, const FVector& rotvel) : RotQuat(quat), PosAccel(pos), RotVel(rotvel) {}

	bool operator==(const FSteamInputMotionData& Other) const { return RotQuat == Other.RotQuat && PosAccel == Other.PosAccel && RotVel == Other.RotVel; }
	bool operator!=(const FSteamInputMotionData& Other) const { return !(*this == Other); }
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamItemDetails
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FSteamItemInstanceID ItemID = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FSteamItemDef Definition = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int32 Quantity = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	TArray<ESteamItemFlags_> Flags;

	FSteamItemDetails() = default;
	FSteamItemDetails(const FSteamItemInstanceID instance, const FSteamItemDef itemdef, const int32 quantity, const TArray<ESteamItemFlags_>& flags) : ItemID(instance), Definition(itemdef), Quantity(quantity), Flags(flags) {}
	FSteamItemDetails(const SteamItemDetails_t& details)
	{
		ItemID = details.m_itemId;
		Definition = details.m_iDefinition;
		Quantity = details.m_unQuantity;
		if (details.m_unFlags & 1 << (int32)ESteamItemFlags_::NoTrade)
		{
			Flags.Add(ESteamItemFlags_::NoTrade);
		}
		if (details.m_unFlags & 1 << (int32)ESteamItemFlags_::ItemRemoved)
		{
			Flags.Add(ESteamItemFlags_::ItemRemoved);
		}
		if (details.m_unFlags & 1 << (int32)ESteamItemFlags_::ItemConsumed)
		{
			Flags.Add(ESteamItemFlags_::ItemConsumed);
		}
	}

	bool operator==(const FSteamItemDetails& Other) const { return ItemID == Other.ItemID && Definition == Other.Definition && Quantity == Other.Quantity && Flags == Other.Flags; }
	bool operator!=(const FSteamItemDetails& Other) const { return !(*this == Other); }
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamPartyBeaconLocation
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	ESteamPartyBeaconLocation Type = ESteamPartyBeaconLocation::Invalid;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int64 LocationID = 0;

	operator SteamPartyBeaconLocation_t() const
	{
		SteamPartyBeaconLocation_t beacon;
		beacon.m_eType = (ESteamPartyBeaconLocationType)Type;
		beacon.m_ulLocationID = LocationID;
		return beacon;
	}

	FSteamPartyBeaconLocation() = default;
	FSteamPartyBeaconLocation(const ESteamPartyBeaconLocation type, const uint64 id) : Type(type), LocationID(id) {}
	FSteamPartyBeaconLocation(const SteamPartyBeaconLocation_t& type) : Type((ESteamPartyBeaconLocation)type.m_eType), LocationID(type.m_ulLocationID) {}

	bool operator==(const FSteamPartyBeaconLocation& Other) const { return Type == Other.Type && LocationID == Other.LocationID; }
	bool operator!=(const FSteamPartyBeaconLocation& Other) const { return !(*this == Other); }
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamLeaderboardEntry
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FSteamID SteamIDUser = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int32 GlobalRank = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int32 Score = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int32 Details = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FUGCHandle UGC = 0;

	FSteamLeaderboardEntry() = default;
	FSteamLeaderboardEntry(FSteamID steamid, int32 glob, int32 score, int32 details, FUGCHandle handle) : SteamIDUser(steamid), GlobalRank(glob), Score(score), Details(details), UGC(handle) {}
	FSteamLeaderboardEntry(const LeaderboardEntry_t& type) : SteamIDUser(type.m_steamIDUser.ConvertToUint64()), GlobalRank(type.m_nGlobalRank), Score(type.m_nScore), Details(type.m_cDetails), UGC(type.m_hUGC) {}

	bool operator==(const FSteamLeaderboardEntry& Other) const { return SteamIDUser == Other.SteamIDUser && GlobalRank == Other.GlobalRank && Score == Other.Score && Details == Other.Details && UGC == Other.UGC; }
	bool operator!=(const FSteamLeaderboardEntry& Other) const { return !(*this == Other); }
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamUGCDetails
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FPublishedFileId PublishedFileId = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	ESteamResult Result = ESteamResult::None;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	ESteamWorkshopFileType FileType = ESteamWorkshopFileType::Max;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int32 CreatorAppID = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int32 ConsumerAppID = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FString Title = "";

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FString Description = "";

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FSteamID SteamIDOwner = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FDateTime TimeCreated = FDateTime();

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FDateTime TimeUpdated = FDateTime();

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FDateTime TimeAddedToUserList = FDateTime();

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	ESteamRemoteStoragePublishedFileVisibility Visibility = ESteamRemoteStoragePublishedFileVisibility::FriendsOnly;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	bool bBanned = false;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	bool bAcceptedForUse = false;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	bool bTagsTruncated = false;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	TArray<FString> Tags;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FUGCHandle File = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FUGCHandle PreviewFile = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FString FileName = "";

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int32 FileSize = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int32 PreviewFileSize = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FString URL = "";

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int32 VotesUp = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int32 VotesDown = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	float Score = 0.0f;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int32 NumChildren = 0;

	FSteamUGCDetails() = default;
	FSteamUGCDetails(const SteamUGCDetails_t& data) :
		PublishedFileId(data.m_nPublishedFileId), Result((ESteamResult)data.m_eResult), FileType((ESteamWorkshopFileType)data.m_eFileType), CreatorAppID(data.m_nCreatorAppID), ConsumerAppID(data.m_nConsumerAppID), Title(FString(UTF8_TO_TCHAR(data.m_rgchTitle))),
		Description(FString(UTF8_TO_TCHAR(data.m_rgchDescription))), SteamIDOwner(data.m_ulSteamIDOwner), TimeCreated(FDateTime::FromUnixTimestamp(data.m_rtimeCreated)), TimeUpdated(FDateTime::FromUnixTimestamp(data.m_rtimeUpdated)), TimeAddedToUserList(FDateTime::FromUnixTimestamp(data.m_rtimeAddedToUserList)),
		Visibility((ESteamRemoteStoragePublishedFileVisibility)data.m_eVisibility), bBanned(data.m_bBanned), bAcceptedForUse(data.m_bAcceptedForUse), bTagsTruncated(data.m_bTagsTruncated), File(data.m_hFile), PreviewFile(data.m_hPreviewFile), FileName(data.m_pchFileName), FileSize(data.m_nFileSize),
		PreviewFileSize(data.m_nPreviewFileSize), URL(UTF8_TO_TCHAR(data.m_rgchURL)), VotesUp(data.m_unVotesUp), VotesDown(data.m_unVotesDown), Score(data.m_flScore), NumChildren(data.m_unNumChildren)
	{
		FString(UTF8_TO_TCHAR(data.m_rgchTags)).ParseIntoArray(Tags, TEXT(","), true);
	}

	bool operator==(const FSteamUGCDetails& Other) const { return PublishedFileId == Other.PublishedFileId && Result == Other.Result && FileType == Other.FileType && CreatorAppID == Other.CreatorAppID && ConsumerAppID == Other.ConsumerAppID && Title == Other.Title && Description == Other.Description && SteamIDOwner == Other.SteamIDOwner && TimeCreated == Other.TimeCreated && TimeUpdated == Other.TimeUpdated && TimeAddedToUserList == Other.TimeAddedToUserList && Visibility == Other.Visibility && bBanned == Other.bBanned && bAcceptedForUse == Other.bAcceptedForUse && bTagsTruncated == Other.bTagsTruncated && Tags == Other.Tags && File == Other.File && PreviewFile == Other.PreviewFile && FileName == Other.FileName && FileSize == Other.FileSize && PreviewFileSize == Other.PreviewFileSize && URL == Other.URL && VotesUp == Other.VotesUp && VotesDown == Other.VotesDown && Score == Other.Score && NumChildren == Other.NumChildren; }
	bool operator!=(const FSteamUGCDetails& Other) const { return !(*this == Other); }
};

USTRUCT(BlueprintType)
struct STEAMBRIDGE_API FSteamItemPriceData
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	FSteamItemDef ItemDef = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int64 CurrentPrice = 0;

	UPROPERTY(BlueprintReadWrite, Category = "SteamBridgeCore")
	int64 BasePrice = 0;

	FSteamItemPriceData() = default;
	FSteamItemPriceData(const FSteamItemDef def, const int64 currentPrice, const int64 basePrice) : ItemDef(def), CurrentPrice(currentPrice), BasePrice(basePrice) {}

	bool operator==(const FSteamItemPriceData& Other) const { return ItemDef == Other.ItemDef && CurrentPrice == Other.CurrentPrice && BasePrice == Other.BasePrice; }
	bool operator!=(const FSteamItemPriceData& Other) const { return !(*this == Other); }
};
