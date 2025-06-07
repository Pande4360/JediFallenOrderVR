#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\PrimaryAssetId.hpp"
#include "..\_Script_CoreUObject\PrimaryAssetType.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\SoftClassPath.hpp"
#include "..\_Script_CoreUObject\SoftObjectPath.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "DebugFloatHistory.hpp"
#include "LatentActionInfo.hpp"
#include "TimerHandle.hpp"
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct UserActivity;
}
namespace _Script_Engine {
struct GenericStruct;
}
namespace _Script_Engine {
struct CollisionProfileName;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Plane;
}
namespace _Script_Engine {
struct CameraActor;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KismetSystemLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void UnregisterForRemoteNotifications();
    void UnloadPrimaryAssetList(void*& PrimaryAssetIdList);
    void UnloadPrimaryAsset(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId);
    void TransactObject(_Script_CoreUObject::Object* Object);
    void StackTrace();
    bool SphereTraceSingleForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool SphereTraceSingleByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool SphereTraceSingle(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool SphereTraceMultiForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool SphereTraceMultiByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool SphereTraceMulti(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool SphereOverlapComponents(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector SpherePos, float SphereRadius, void*& ObjectTypes, void* ComponentClassFilter, void*& ActorsToIgnore, void*& OutComponents);
    bool SphereOverlapActors(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector SpherePos, float SphereRadius, void*& ObjectTypes, void* ActorClassFilter, void*& ActorsToIgnore, void*& OutActors);
    void ShowPlatformSpecificLeaderboardScreen(void* CategoryName);
    void ShowPlatformSpecificAchievementsScreen(_Script_Engine::PlayerController* SpecificPlayer);
    void ShowInterstitialAd();
    void ShowAdBanner(int32_t AdIdIndex, bool bShowOnBottomOfScreen);
    void SetWindowTitle(void*& Title);
    void SetVolumeButtonsHandledBySystem(bool bEnabled);
    void SetVectorPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_CoreUObject::Vector& Value);
    void SetUserActivity(_Script_Engine::UserActivity& UserActivity);
    void SetTransformPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_CoreUObject::Transform& Value);
    void SetTextPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value);
    void SetSuppressViewportTransitionMessage(_Script_CoreUObject::Object* WorldContextObject, bool bState);
    void SetStructurePropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_Engine::GenericStruct& Value);
    void SetStringPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void* Value);
    void SetSoftObjectPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value);
    void SetSoftClassPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value);
    void SetRotatorPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_CoreUObject::Rotator& Value);
    void SetObjectPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_CoreUObject::Object* Value);
    void SetNamePropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value);
    void SetLinearColorPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_CoreUObject::LinearColor& Value);
    void SetIntPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, int32_t Value);
    void SetInterfacePropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value);
    void SetFloatPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, float Value);
    void SetCollisionProfileNameProperty(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_Engine::CollisionProfileName& Value);
    void SetClassPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void* Value);
    void SetBytePropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void* Value);
    void SetBoolPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, bool Value);
    void RetriggerableDelay(_Script_CoreUObject::Object* WorldContextObject, float Duration, _Script_Engine::LatentActionInfo LatentInfo);
    void ResetGamepadAssignmentToController(int32_t ControllerId);
    void ResetGamepadAssignments();
    void RegisterForRemoteNotifications();
    void QuitGame(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* SpecificPlayer, void* QuitPreference, bool bIgnorePlatformRestrictions);
    void PrintWarning(void* inString);
    void PrintText(_Script_CoreUObject::Object* WorldContextObject, void* InText, bool bPrintToScreen, bool bPrintToLog, _Script_CoreUObject::LinearColor TextColor, float Duration);
    void PrintString(_Script_CoreUObject::Object* WorldContextObject, void* inString, bool bPrintToScreen, bool bPrintToLog, _Script_CoreUObject::LinearColor TextColor, float Duration);
    bool NotEqual_SoftObjectReference(void*& A, void*& B);
    bool NotEqual_SoftClassReference(void*& A, void*& B);
    bool NotEqual_PrimaryAssetType(_Script_CoreUObject::PrimaryAssetType A, _Script_CoreUObject::PrimaryAssetType B);
    bool NotEqual_PrimaryAssetId(_Script_CoreUObject::PrimaryAssetId A, _Script_CoreUObject::PrimaryAssetId B);
    void* NormalizeFilename(void* InFilename);
    void MoveComponentTo(_Script_Engine::SceneComponent* Component, _Script_CoreUObject::Vector TargetRelativeLocation, _Script_CoreUObject::Rotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, void* MoveAction, _Script_Engine::LatentActionInfo LatentInfo);
    _Script_CoreUObject::SoftObjectPath MakeSoftObjectPath(void* PathString);
    _Script_CoreUObject::SoftClassPath MakeSoftClassPath(void* PathString);
    void* MakeLiteralText(void* Value);
    void* MakeLiteralString(void* Value);
    void* MakeLiteralName(void* Value);
    int32_t MakeLiteralInt(int32_t Value);
    float MakeLiteralFloat(float Value);
    void* MakeLiteralByte(void* Value);
    bool MakeLiteralBool(bool Value);
    void LoadInterstitialAd(int32_t AdIdIndex);
    void LoadAssetClass(_Script_CoreUObject::Object* WorldContextObject, void* AssetClass, void* OnLoaded, _Script_Engine::LatentActionInfo LatentInfo);
    void LoadAsset(_Script_CoreUObject::Object* WorldContextObject, void* Asset, void* OnLoaded, _Script_Engine::LatentActionInfo LatentInfo);
    bool LineTraceSingleForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool LineTraceSingleByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool LineTraceSingle(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool LineTraceMultiForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool LineTraceMultiByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool LineTraceMulti(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    void LaunchURL(void* URL);
    void K2_UnPauseTimerHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle);
    void K2_UnPauseTimerDelegate(void* Delegate);
    void K2_UnPauseTimer(_Script_CoreUObject::Object* Object, void* FunctionName);
    bool K2_TimerExistsHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle);
    bool K2_TimerExistsDelegate(void* Delegate);
    bool K2_TimerExists(_Script_CoreUObject::Object* Object, void* FunctionName);
    _Script_Engine::TimerHandle K2_SetTimerDelegate(void* Delegate, float Time, bool bLooping);
    _Script_Engine::TimerHandle K2_SetTimer(_Script_CoreUObject::Object* Object, void* FunctionName, float Time, bool bLooping);
    void K2_PauseTimerHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle);
    void K2_PauseTimerDelegate(void* Delegate);
    void K2_PauseTimer(_Script_CoreUObject::Object* Object, void* FunctionName);
    bool K2_IsValidTimerHandle(_Script_Engine::TimerHandle Handle);
    bool K2_IsTimerPausedHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle);
    bool K2_IsTimerPausedDelegate(void* Delegate);
    bool K2_IsTimerPaused(_Script_CoreUObject::Object* Object, void* FunctionName);
    bool K2_IsTimerActiveHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle);
    bool K2_IsTimerActiveDelegate(void* Delegate);
    bool K2_IsTimerActive(_Script_CoreUObject::Object* Object, void* FunctionName);
    _Script_Engine::TimerHandle K2_InvalidateTimerHandle(_Script_Engine::TimerHandle& Handle);
    float K2_GetTimerRemainingTimeHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle);
    float K2_GetTimerRemainingTimeDelegate(void* Delegate);
    float K2_GetTimerRemainingTime(_Script_CoreUObject::Object* Object, void* FunctionName);
    float K2_GetTimerElapsedTimeHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle);
    float K2_GetTimerElapsedTimeDelegate(void* Delegate);
    float K2_GetTimerElapsedTime(_Script_CoreUObject::Object* Object, void* FunctionName);
    void K2_ClearTimerHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle);
    void K2_ClearTimerDelegate(void* Delegate);
    void K2_ClearTimer(_Script_CoreUObject::Object* Object, void* FunctionName);
    void K2_ClearAndInvalidateTimerHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle& Handle);
    bool IsValidSoftObjectReference(void*& SoftObjectReference);
    bool IsValidSoftClassReference(void*& SoftClassReference);
    bool IsValidPrimaryAssetType(_Script_CoreUObject::PrimaryAssetType PrimaryAssetType);
    bool IsValidPrimaryAssetId(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId);
    bool IsValidClass(void* Class);
    bool IsValid(_Script_CoreUObject::Object* Object);
    bool IsUnattended();
    bool IsTestBuild();
    bool IsStandalone(_Script_CoreUObject::Object* WorldContextObject);
    bool IsShippingBuild();
    bool IsServer(_Script_CoreUObject::Object* WorldContextObject);
    bool IsScreensaverEnabled();
    bool IsPackagedForDistribution();
    bool IsLoggedIn(_Script_Engine::PlayerController* SpecificPlayer);
    bool IsInterstitialAdRequested();
    bool IsInterstitialAdAvailable();
    bool IsDedicatedServer(_Script_CoreUObject::Object* WorldContextObject);
    bool IsControllerAssignedToGamepad(int32_t ControllerId);
    void HideAdBanner();
    bool GetVolumeButtonsHandledBySystem();
    void* GetUniqueDeviceId();
    bool GetSupportedFullscreenResolutions(void*& Resolutions);
    void* GetSoftObjectReferenceFromPrimaryAssetId(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId);
    void* GetSoftClassReferenceFromPrimaryAssetId(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId);
    int32_t GetRenderingMaterialQualityLevel();
    int32_t GetRenderingDetailMode();
    void* GetProjectSavedDirectory();
    void* GetProjectDirectory();
    void* GetProjectContentDirectory();
    void* GetProductRegion();
    void GetPrimaryAssetsWithBundleState(void*& RequiredBundles, void*& ExcludedBundles, void*& ValidTypes, bool bForceCurrentState, void*& OutPrimaryAssetIdList);
    void GetPrimaryAssetIdList(_Script_CoreUObject::PrimaryAssetType PrimaryAssetType, void*& OutPrimaryAssetIdList);
    _Script_CoreUObject::PrimaryAssetId GetPrimaryAssetIdFromSoftObjectReference(void* SoftObjectReference);
    _Script_CoreUObject::PrimaryAssetId GetPrimaryAssetIdFromSoftClassReference(void* SoftClassReference);
    _Script_CoreUObject::PrimaryAssetId GetPrimaryAssetIdFromObject(_Script_CoreUObject::Object* Object);
    _Script_CoreUObject::PrimaryAssetId GetPrimaryAssetIdFromClass(void* Class);
    void* GetPreferredLanguages();
    void* GetPlatformUserName();
    void* GetPathName(_Script_CoreUObject::Object* Object);
    void* GetObjectName(_Script_CoreUObject::Object* Object);
    _Script_CoreUObject::Object* GetObjectFromPrimaryAssetId(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId);
    int32_t GetMinYResolutionForUI();
    int32_t GetMinYResolutionFor3DView();
    void* GetLocalCurrencySymbol();
    void* GetLocalCurrencyCode();
    float GetGameTimeInSeconds(_Script_CoreUObject::Object* WorldContextObject);
    void* GetGameName();
    void* GetGameBundleId();
    void* GetEngineVersion();
    void* GetDisplayName(_Script_CoreUObject::Object* Object);
    void* GetDeviceId();
    void* GetDefaultLocale();
    void* GetDefaultLanguage();
    bool GetCurrentBundleState(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId, bool bForceCurrentState, void*& OutBundles);
    bool GetConvenientWindowedResolutions(void*& Resolutions);
    int32_t GetConsoleVariableIntValue(_Script_CoreUObject::Object* WorldContextObject, void* VariableName);
    float GetConsoleVariableFloatValue(_Script_CoreUObject::Object* WorldContextObject, void* VariableName);
    void GetComponentBounds(_Script_Engine::SceneComponent* Component, _Script_CoreUObject::Vector& origin, _Script_CoreUObject::Vector& BoxExtent, float& SphereRadius);
    void* GetCommandLine();
    void* GetClassFromPrimaryAssetId(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId);
    void* GetClassDisplayName(void* Class);
    int32_t GetAdIDCount();
    void GetActorListFromComponentList(void*& ComponentList, void* ActorClassFilter, void*& OutActorList);
    void GetActorBounds(_Script_Engine::Actor* Actor, _Script_CoreUObject::Vector& origin, _Script_CoreUObject::Vector& BoxExtent);
    void ForceCloseAdBanner();
    void FlushPersistentDebugLines(_Script_CoreUObject::Object* WorldContextObject);
    void FlushDebugStrings(_Script_CoreUObject::Object* WorldContextObject);
    void ExecuteConsoleCommand(_Script_CoreUObject::Object* WorldContextObject, void* Command, _Script_Engine::PlayerController* SpecificPlayer);
    bool EqualEqual_SoftObjectReference(void*& A, void*& B);
    bool EqualEqual_SoftClassReference(void*& A, void*& B);
    bool EqualEqual_PrimaryAssetType(_Script_CoreUObject::PrimaryAssetType A, _Script_CoreUObject::PrimaryAssetType B);
    bool EqualEqual_PrimaryAssetId(_Script_CoreUObject::PrimaryAssetId A, _Script_CoreUObject::PrimaryAssetId B);
    int32_t EndTransaction();
    void DrawDebugString(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector TextLocation, void* Text, _Script_Engine::Actor* TestBaseActor, _Script_CoreUObject::LinearColor TextColor, float Duration);
    void DrawDebugSphere(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Center, float Radius, int32_t Segments, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness);
    void DrawDebugPoint(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Position, float Size, _Script_CoreUObject::LinearColor PointColor, float Duration);
    void DrawDebugPlane(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Plane& PlaneCoordinates, _Script_CoreUObject::Vector Location, float Size, _Script_CoreUObject::LinearColor PlaneColor, float Duration);
    void DrawDebugLine(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector LineStart, _Script_CoreUObject::Vector LineEnd, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness);
    void DrawDebugFrustum(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Transform& FrustumTransform, _Script_CoreUObject::LinearColor FrustumColor, float Duration, float Thickness);
    void DrawDebugFloatHistoryTransform(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::DebugFloatHistory& FloatHistory, _Script_CoreUObject::Transform& DrawTransform, _Script_CoreUObject::Vector2D DrawSize, _Script_CoreUObject::LinearColor DrawColor, float Duration);
    void DrawDebugFloatHistoryLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::DebugFloatHistory& FloatHistory, _Script_CoreUObject::Vector DrawLocation, _Script_CoreUObject::Vector2D DrawSize, _Script_CoreUObject::LinearColor DrawColor, float Duration);
    void DrawDebugCylinder(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, int32_t Segments, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness);
    void DrawDebugCoordinateSystem(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector AxisLoc, _Script_CoreUObject::Rotator AxisRot, float Scale, float Duration, float Thickness);
    void DrawDebugConeInDegrees(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector origin, _Script_CoreUObject::Vector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness);
    void DrawDebugCone(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector origin, _Script_CoreUObject::Vector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness);
    void DrawDebugCircle(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Center, float Radius, int32_t NumSegments, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness, _Script_CoreUObject::Vector YAxis, _Script_CoreUObject::Vector ZAxis, bool bDrawAxis);
    void DrawDebugCapsule(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Center, float HalfHeight, float Radius, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness);
    void DrawDebugCamera(_Script_Engine::CameraActor* CameraActor, _Script_CoreUObject::LinearColor CameraColor, float Duration);
    void DrawDebugBox(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Center, _Script_CoreUObject::Vector Extent, _Script_CoreUObject::LinearColor LineColor, _Script_CoreUObject::Rotator Rotation, float Duration, float Thickness);
    void DrawDebugArrow(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector LineStart, _Script_CoreUObject::Vector LineEnd, float ArrowSize, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness);
    bool DoesImplementInterface(_Script_CoreUObject::Object* TestObject, void* Interface);
    void Delay(_Script_CoreUObject::Object* WorldContextObject, float Duration, _Script_Engine::LatentActionInfo LatentInfo);
    void DebugBreak();
    void CreateCopyForUndoBuffer(_Script_CoreUObject::Object* ObjectToModify);
    void* ConvertToRelativePath(void* Filename);
    void* ConvertToAbsolutePath(void* Filename);
    void* Conv_SoftObjectReferenceToString(void*& SoftObjectReference);
    _Script_CoreUObject::Object* Conv_SoftObjectReferenceToObject(void*& SoftObject);
    void* Conv_SoftObjectPathToSoftObjectReference(_Script_CoreUObject::SoftObjectPath& SoftObjectPath);
    void* Conv_SoftClassReferenceToString(void*& SoftClassReference);
    void* Conv_SoftClassReferenceToClass(void*& SoftClass);
    void* Conv_SoftClassPathToSoftClassReference(_Script_CoreUObject::SoftClassPath& SoftClassPath);
    void* Conv_PrimaryAssetTypeToString(_Script_CoreUObject::PrimaryAssetType PrimaryAssetType);
    void* Conv_PrimaryAssetIdToString(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId);
    void* Conv_ObjectToSoftObjectReference(_Script_CoreUObject::Object* Object);
    _Script_CoreUObject::Object* Conv_InterfaceToObject(void*& Interface);
    void* Conv_ClassToSoftClassReference(void*& Class);
    void ControlScreensaver(bool bAllowScreenSaver);
    bool ComponentOverlapComponents(_Script_Engine::PrimitiveComponent* Component, _Script_CoreUObject::Transform& ComponentTransform, void*& ObjectTypes, void* ComponentClassFilter, void*& ActorsToIgnore, void*& OutComponents);
    bool ComponentOverlapActors(_Script_Engine::PrimitiveComponent* Component, _Script_CoreUObject::Transform& ComponentTransform, void*& ObjectTypes, void* ActorClassFilter, void*& ActorsToIgnore, void*& OutActors);
    void CollectGarbage();
    bool CapsuleTraceSingleForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, float HalfHeight, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceSingleByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, float HalfHeight, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceSingle(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, float HalfHeight, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceMultiForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, float HalfHeight, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceMultiByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, float HalfHeight, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool CapsuleTraceMulti(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, float HalfHeight, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool CapsuleOverlapComponents(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector CapsulePos, float Radius, float HalfHeight, void*& ObjectTypes, void* ComponentClassFilter, void*& ActorsToIgnore, void*& OutComponents);
    bool CapsuleOverlapActors(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector CapsulePos, float Radius, float HalfHeight, void*& ObjectTypes, void* ActorClassFilter, void*& ActorsToIgnore, void*& OutActors);
    bool CanLaunchURL(void* URL);
    void CancelTransaction(int32_t Index);
    void BreakSoftObjectPath(_Script_CoreUObject::SoftObjectPath InSoftObjectPath, void*& PathString);
    void BreakSoftClassPath(_Script_CoreUObject::SoftClassPath InSoftClassPath, void*& PathString);
    bool BoxTraceSingleForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_CoreUObject::Vector HalfSize, _Script_CoreUObject::Rotator Orientation, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool BoxTraceSingleByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_CoreUObject::Vector HalfSize, _Script_CoreUObject::Rotator Orientation, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool BoxTraceSingle(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_CoreUObject::Vector HalfSize, _Script_CoreUObject::Rotator Orientation, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool BoxTraceMultiForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_CoreUObject::Vector HalfSize, _Script_CoreUObject::Rotator Orientation, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool BoxTraceMultiByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_CoreUObject::Vector HalfSize, _Script_CoreUObject::Rotator Orientation, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool BoxTraceMulti(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_CoreUObject::Vector HalfSize, _Script_CoreUObject::Rotator Orientation, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime);
    bool BoxOverlapComponents(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector BoxPos, _Script_CoreUObject::Vector Extent, void*& ObjectTypes, void* ComponentClassFilter, void*& ActorsToIgnore, void*& OutComponents);
    bool BoxOverlapActors(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector BoxPos, _Script_CoreUObject::Vector BoxExtent, void*& ObjectTypes, void* ActorClassFilter, void*& ActorsToIgnore, void*& OutActors);
    int32_t BeginTransaction(void* Context, void* Description, _Script_CoreUObject::Object* PrimaryObject);
    _Script_Engine::DebugFloatHistory AddFloatHistorySample(float Value, _Script_Engine::DebugFloatHistory& FloatHistory);
}; // Size: 0x28
#pragma pack(pop)
}
