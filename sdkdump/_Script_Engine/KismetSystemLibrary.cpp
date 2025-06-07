#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Plane.hpp"
#include "..\_Script_CoreUObject\PrimaryAssetId.hpp"
#include "..\_Script_CoreUObject\PrimaryAssetType.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\SoftClassPath.hpp"
#include "..\_Script_CoreUObject\SoftObjectPath.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "Actor.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "CameraActor.hpp"
#include "CollisionProfileName.hpp"
#include "DebugFloatHistory.hpp"
#include "GenericStruct.hpp"
#include "HitResult.hpp"
#include "KismetSystemLibrary.hpp"
#include "LatentActionInfo.hpp"
#include "PlayerController.hpp"
#include "PrimitiveComponent.hpp"
#include "SceneComponent.hpp"
#include "TimerHandle.hpp"
#include "UserActivity.hpp"
void _Script_Engine::KismetSystemLibrary::UnloadPrimaryAsset(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId) {
    return;
}
int32_t _Script_Engine::KismetSystemLibrary::GetMinYResolutionFor3DView() {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetCollisionProfileNameProperty(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_Engine::CollisionProfileName& Value) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::KismetSystemLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KismetSystemLibrary");
    return result;
}
bool _Script_Engine::KismetSystemLibrary::LineTraceSingle(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
void _Script_Engine::KismetSystemLibrary::TransactObject(_Script_CoreUObject::Object* Object) {
    return;
}
void _Script_Engine::KismetSystemLibrary::UnregisterForRemoteNotifications() {
    return;
}
bool _Script_Engine::KismetSystemLibrary::SphereTraceSingleForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
int32_t _Script_Engine::KismetSystemLibrary::EndTransaction() {
    return;
}
void _Script_Engine::KismetSystemLibrary::UnloadPrimaryAssetList(void*& PrimaryAssetIdList) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::MakeLiteralName(void* Value) {
    return;
}
void _Script_Engine::KismetSystemLibrary::StackTrace() {
    return;
}
bool _Script_Engine::KismetSystemLibrary::K2_IsTimerPaused(_Script_CoreUObject::Object* Object, void* FunctionName) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::SphereTraceSingleByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetInterfacePropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::SphereTraceSingle(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetLocalCurrencyCode() {
    return;
}
bool _Script_Engine::KismetSystemLibrary::NotEqual_PrimaryAssetId(_Script_CoreUObject::PrimaryAssetId A, _Script_CoreUObject::PrimaryAssetId B) {
    return;
}
_Script_CoreUObject::Object* _Script_Engine::KismetSystemLibrary::Conv_SoftObjectReferenceToObject(void*& SoftObject) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::SphereTraceMultiForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetBoolPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, bool Value) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::SphereTraceMultiByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::K2_IsTimerPausedDelegate(void* Delegate) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::SphereTraceMulti(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
void _Script_Engine::KismetSystemLibrary::K2_UnPauseTimer(_Script_CoreUObject::Object* Object, void* FunctionName) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::SphereOverlapComponents(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector SpherePos, float SphereRadius, void*& ObjectTypes, void* ComponentClassFilter, void*& ActorsToIgnore, void*& OutComponents) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::SphereOverlapActors(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector SpherePos, float SphereRadius, void*& ObjectTypes, void* ActorClassFilter, void*& ActorsToIgnore, void*& OutActors) {
    return;
}
void _Script_Engine::KismetSystemLibrary::K2_ClearTimerDelegate(void* Delegate) {
    return;
}
void _Script_Engine::KismetSystemLibrary::ShowPlatformSpecificLeaderboardScreen(void* CategoryName) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::Conv_PrimaryAssetTypeToString(_Script_CoreUObject::PrimaryAssetType PrimaryAssetType) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetEngineVersion() {
    return;
}
bool _Script_Engine::KismetSystemLibrary::NotEqual_PrimaryAssetType(_Script_CoreUObject::PrimaryAssetType A, _Script_CoreUObject::PrimaryAssetType B) {
    return;
}
void _Script_Engine::KismetSystemLibrary::ShowPlatformSpecificAchievementsScreen(_Script_Engine::PlayerController* SpecificPlayer) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetStructurePropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_Engine::GenericStruct& Value) {
    return;
}
void _Script_Engine::KismetSystemLibrary::ShowInterstitialAd() {
    return;
}
void _Script_Engine::KismetSystemLibrary::ShowAdBanner(int32_t AdIdIndex, bool bShowOnBottomOfScreen) {
    return;
}
void _Script_Engine::KismetSystemLibrary::LoadInterstitialAd(int32_t AdIdIndex) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetWindowTitle(void*& Title) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetVolumeButtonsHandledBySystem(bool bEnabled) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugConeInDegrees(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector origin, _Script_CoreUObject::Vector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness) {
    return;
}
float _Script_Engine::KismetSystemLibrary::K2_GetTimerRemainingTimeHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetVectorPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_CoreUObject::Vector& Value) {
    return;
}
_Script_Engine::DebugFloatHistory _Script_Engine::KismetSystemLibrary::AddFloatHistorySample(float Value, _Script_Engine::DebugFloatHistory& FloatHistory) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetUserActivity(_Script_Engine::UserActivity& UserActivity) {
    return;
}
int32_t _Script_Engine::KismetSystemLibrary::MakeLiteralInt(int32_t Value) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsValidSoftClassReference(void*& SoftClassReference) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetTransformPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_CoreUObject::Transform& Value) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsValidPrimaryAssetId(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetTextPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::EqualEqual_SoftObjectReference(void*& A, void*& B) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetSuppressViewportTransitionMessage(_Script_CoreUObject::Object* WorldContextObject, bool bState) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetFloatPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, float Value) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetStringPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void* Value) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetSoftObjectPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugPoint(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Position, float Size, _Script_CoreUObject::LinearColor PointColor, float Duration) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsUnattended() {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetSoftClassPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value) {
    return;
}
void _Script_Engine::KismetSystemLibrary::K2_ClearAndInvalidateTimerHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle& Handle) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetRotatorPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_CoreUObject::Rotator& Value) {
    return;
}
void _Script_Engine::KismetSystemLibrary::HideAdBanner() {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetObjectPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_CoreUObject::Object* Value) {
    return;
}
void _Script_Engine::KismetSystemLibrary::PrintString(_Script_CoreUObject::Object* WorldContextObject, void* inString, bool bPrintToScreen, bool bPrintToLog, _Script_CoreUObject::LinearColor TextColor, float Duration) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetNamePropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void*& Value) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsInterstitialAdRequested() {
    return;
}
void _Script_Engine::KismetSystemLibrary::QuitGame(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::PlayerController* SpecificPlayer, void* QuitPreference, bool bIgnorePlatformRestrictions) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetLinearColorPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, _Script_CoreUObject::LinearColor& Value) {
    return;
}
void _Script_Engine::KismetSystemLibrary::PrintWarning(void* inString) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetIntPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, int32_t Value) {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetClassPropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void* Value) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsPackagedForDistribution() {
    return;
}
void _Script_Engine::KismetSystemLibrary::SetBytePropertyByName(_Script_CoreUObject::Object* Object, void* PropertyName, void* Value) {
    return;
}
int32_t _Script_Engine::KismetSystemLibrary::GetConsoleVariableIntValue(_Script_CoreUObject::Object* WorldContextObject, void* VariableName) {
    return;
}
void _Script_Engine::KismetSystemLibrary::RetriggerableDelay(_Script_CoreUObject::Object* WorldContextObject, float Duration, _Script_Engine::LatentActionInfo LatentInfo) {
    return;
}
_Script_CoreUObject::SoftObjectPath _Script_Engine::KismetSystemLibrary::MakeSoftObjectPath(void* PathString) {
    return;
}
void _Script_Engine::KismetSystemLibrary::ResetGamepadAssignmentToController(int32_t ControllerId) {
    return;
}
void _Script_Engine::KismetSystemLibrary::RegisterForRemoteNotifications() {
    return;
}
int32_t _Script_Engine::KismetSystemLibrary::GetRenderingDetailMode() {
    return;
}
void _Script_Engine::KismetSystemLibrary::ResetGamepadAssignments() {
    return;
}
int32_t _Script_Engine::KismetSystemLibrary::GetMinYResolutionForUI() {
    return;
}
void _Script_Engine::KismetSystemLibrary::PrintText(_Script_CoreUObject::Object* WorldContextObject, void* InText, bool bPrintToScreen, bool bPrintToLog, _Script_CoreUObject::LinearColor TextColor, float Duration) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::MakeLiteralBool(bool Value) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::NotEqual_SoftObjectReference(void*& A, void*& B) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::NotEqual_SoftClassReference(void*& A, void*& B) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::BoxTraceMultiForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_CoreUObject::Vector HalfSize, _Script_CoreUObject::Rotator Orientation, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::NormalizeFilename(void* InFilename) {
    return;
}
void _Script_Engine::KismetSystemLibrary::MoveComponentTo(_Script_Engine::SceneComponent* Component, _Script_CoreUObject::Vector TargetRelativeLocation, _Script_CoreUObject::Rotator TargetRelativeRotation, bool bEaseOut, bool bEaseIn, float OverTime, bool bForceShortestRotationPath, void* MoveAction, _Script_Engine::LatentActionInfo LatentInfo) {
    return;
}
_Script_CoreUObject::SoftClassPath _Script_Engine::KismetSystemLibrary::MakeSoftClassPath(void* PathString) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::MakeLiteralText(void* Value) {
    return;
}
void _Script_Engine::KismetSystemLibrary::ExecuteConsoleCommand(_Script_CoreUObject::Object* WorldContextObject, void* Command, _Script_Engine::PlayerController* SpecificPlayer) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::MakeLiteralString(void* Value) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetGameBundleId() {
    return;
}
float _Script_Engine::KismetSystemLibrary::MakeLiteralFloat(float Value) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::MakeLiteralByte(void* Value) {
    return;
}
void _Script_Engine::KismetSystemLibrary::LoadAssetClass(_Script_CoreUObject::Object* WorldContextObject, void* AssetClass, void* OnLoaded, _Script_Engine::LatentActionInfo LatentInfo) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsLoggedIn(_Script_Engine::PlayerController* SpecificPlayer) {
    return;
}
void _Script_Engine::KismetSystemLibrary::LoadAsset(_Script_CoreUObject::Object* WorldContextObject, void* Asset, void* OnLoaded, _Script_Engine::LatentActionInfo LatentInfo) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::LineTraceSingleForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::LineTraceSingleByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::LineTraceMultiForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
void _Script_Engine::KismetSystemLibrary::BreakSoftObjectPath(_Script_CoreUObject::SoftObjectPath InSoftObjectPath, void*& PathString) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetSoftClassReferenceFromPrimaryAssetId(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::LineTraceMultiByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::Conv_SoftObjectReferenceToString(void*& SoftObjectReference) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::LineTraceMulti(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
_Script_CoreUObject::PrimaryAssetId _Script_Engine::KismetSystemLibrary::GetPrimaryAssetIdFromClass(void* Class) {
    return;
}
void _Script_Engine::KismetSystemLibrary::LaunchURL(void* URL) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::GetSupportedFullscreenResolutions(void*& Resolutions) {
    return;
}
void _Script_Engine::KismetSystemLibrary::K2_UnPauseTimerHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugCoordinateSystem(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector AxisLoc, _Script_CoreUObject::Rotator AxisRot, float Scale, float Duration, float Thickness) {
    return;
}
void _Script_Engine::KismetSystemLibrary::GetPrimaryAssetIdList(_Script_CoreUObject::PrimaryAssetType PrimaryAssetType, void*& OutPrimaryAssetIdList) {
    return;
}
void _Script_Engine::KismetSystemLibrary::K2_UnPauseTimerDelegate(void* Delegate) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::K2_TimerExistsHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::K2_TimerExistsDelegate(void* Delegate) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::K2_TimerExists(_Script_CoreUObject::Object* Object, void* FunctionName) {
    return;
}
void _Script_Engine::KismetSystemLibrary::GetActorListFromComponentList(void*& ComponentList, void* ActorClassFilter, void*& OutActorList) {
    return;
}
_Script_Engine::TimerHandle _Script_Engine::KismetSystemLibrary::K2_SetTimerDelegate(void* Delegate, float Time, bool bLooping) {
    return;
}
_Script_Engine::TimerHandle _Script_Engine::KismetSystemLibrary::K2_SetTimer(_Script_CoreUObject::Object* Object, void* FunctionName, float Time, bool bLooping) {
    return;
}
_Script_CoreUObject::Object* _Script_Engine::KismetSystemLibrary::GetObjectFromPrimaryAssetId(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId) {
    return;
}
void _Script_Engine::KismetSystemLibrary::K2_PauseTimerHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsInterstitialAdAvailable() {
    return;
}
void _Script_Engine::KismetSystemLibrary::K2_PauseTimerDelegate(void* Delegate) {
    return;
}
void _Script_Engine::KismetSystemLibrary::K2_PauseTimer(_Script_CoreUObject::Object* Object, void* FunctionName) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::K2_IsValidTimerHandle(_Script_Engine::TimerHandle Handle) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::K2_IsTimerPausedHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::K2_IsTimerActiveHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::K2_IsTimerActiveDelegate(void* Delegate) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::K2_IsTimerActive(_Script_CoreUObject::Object* Object, void* FunctionName) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetProjectSavedDirectory() {
    return;
}
_Script_Engine::TimerHandle _Script_Engine::KismetSystemLibrary::K2_InvalidateTimerHandle(_Script_Engine::TimerHandle& Handle) {
    return;
}
float _Script_Engine::KismetSystemLibrary::K2_GetTimerRemainingTimeDelegate(void* Delegate) {
    return;
}
void _Script_Engine::KismetSystemLibrary::CollectGarbage() {
    return;
}
float _Script_Engine::KismetSystemLibrary::K2_GetTimerRemainingTime(_Script_CoreUObject::Object* Object, void* FunctionName) {
    return;
}
float _Script_Engine::KismetSystemLibrary::K2_GetTimerElapsedTimeHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle) {
    return;
}
void _Script_Engine::KismetSystemLibrary::CancelTransaction(int32_t Index) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetUniqueDeviceId() {
    return;
}
float _Script_Engine::KismetSystemLibrary::K2_GetTimerElapsedTimeDelegate(void* Delegate) {
    return;
}
float _Script_Engine::KismetSystemLibrary::K2_GetTimerElapsedTime(_Script_CoreUObject::Object* Object, void* FunctionName) {
    return;
}
void _Script_Engine::KismetSystemLibrary::K2_ClearTimerHandle(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::TimerHandle Handle) {
    return;
}
void _Script_Engine::KismetSystemLibrary::K2_ClearTimer(_Script_CoreUObject::Object* Object, void* FunctionName) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsValidSoftObjectReference(void*& SoftObjectReference) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsValidPrimaryAssetType(_Script_CoreUObject::PrimaryAssetType PrimaryAssetType) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsValidClass(void* Class) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsValid(_Script_CoreUObject::Object* Object) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsTestBuild() {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsStandalone(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
float _Script_Engine::KismetSystemLibrary::GetGameTimeInSeconds(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsShippingBuild() {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugSphere(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Center, float Radius, int32_t Segments, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetDefaultLanguage() {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsServer(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsScreensaverEnabled() {
    return;
}
bool _Script_Engine::KismetSystemLibrary::BoxTraceMultiByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_CoreUObject::Vector HalfSize, _Script_CoreUObject::Rotator Orientation, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsDedicatedServer(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::IsControllerAssignedToGamepad(int32_t ControllerId) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::GetVolumeButtonsHandledBySystem() {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetSoftObjectReferenceFromPrimaryAssetId(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId) {
    return;
}
int32_t _Script_Engine::KismetSystemLibrary::GetRenderingMaterialQualityLevel() {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetProjectDirectory() {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetProjectContentDirectory() {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetProductRegion() {
    return;
}
void _Script_Engine::KismetSystemLibrary::GetPrimaryAssetsWithBundleState(void*& RequiredBundles, void*& ExcludedBundles, void*& ValidTypes, bool bForceCurrentState, void*& OutPrimaryAssetIdList) {
    return;
}
_Script_CoreUObject::PrimaryAssetId _Script_Engine::KismetSystemLibrary::GetPrimaryAssetIdFromSoftObjectReference(void* SoftObjectReference) {
    return;
}
_Script_CoreUObject::PrimaryAssetId _Script_Engine::KismetSystemLibrary::GetPrimaryAssetIdFromSoftClassReference(void* SoftClassReference) {
    return;
}
_Script_CoreUObject::PrimaryAssetId _Script_Engine::KismetSystemLibrary::GetPrimaryAssetIdFromObject(_Script_CoreUObject::Object* Object) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetPreferredLanguages() {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetPlatformUserName() {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetPathName(_Script_CoreUObject::Object* Object) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetObjectName(_Script_CoreUObject::Object* Object) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetLocalCurrencySymbol() {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetGameName() {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetDisplayName(_Script_CoreUObject::Object* Object) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetDeviceId() {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetDefaultLocale() {
    return;
}
bool _Script_Engine::KismetSystemLibrary::GetCurrentBundleState(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId, bool bForceCurrentState, void*& OutBundles) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::GetConvenientWindowedResolutions(void*& Resolutions) {
    return;
}
float _Script_Engine::KismetSystemLibrary::GetConsoleVariableFloatValue(_Script_CoreUObject::Object* WorldContextObject, void* VariableName) {
    return;
}
void _Script_Engine::KismetSystemLibrary::GetComponentBounds(_Script_Engine::SceneComponent* Component, _Script_CoreUObject::Vector& origin, _Script_CoreUObject::Vector& BoxExtent, float& SphereRadius) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DebugBreak() {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetCommandLine() {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetClassFromPrimaryAssetId(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::GetClassDisplayName(void* Class) {
    return;
}
int32_t _Script_Engine::KismetSystemLibrary::GetAdIDCount() {
    return;
}
void _Script_Engine::KismetSystemLibrary::GetActorBounds(_Script_Engine::Actor* Actor, _Script_CoreUObject::Vector& origin, _Script_CoreUObject::Vector& BoxExtent) {
    return;
}
void _Script_Engine::KismetSystemLibrary::ForceCloseAdBanner() {
    return;
}
void _Script_Engine::KismetSystemLibrary::FlushPersistentDebugLines(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void _Script_Engine::KismetSystemLibrary::FlushDebugStrings(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::EqualEqual_SoftClassReference(void*& A, void*& B) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::EqualEqual_PrimaryAssetType(_Script_CoreUObject::PrimaryAssetType A, _Script_CoreUObject::PrimaryAssetType B) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::EqualEqual_PrimaryAssetId(_Script_CoreUObject::PrimaryAssetId A, _Script_CoreUObject::PrimaryAssetId B) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugString(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector TextLocation, void* Text, _Script_Engine::Actor* TestBaseActor, _Script_CoreUObject::LinearColor TextColor, float Duration) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugPlane(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Plane& PlaneCoordinates, _Script_CoreUObject::Vector Location, float Size, _Script_CoreUObject::LinearColor PlaneColor, float Duration) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugLine(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector LineStart, _Script_CoreUObject::Vector LineEnd, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugFrustum(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Transform& FrustumTransform, _Script_CoreUObject::LinearColor FrustumColor, float Duration, float Thickness) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugFloatHistoryTransform(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::DebugFloatHistory& FloatHistory, _Script_CoreUObject::Transform& DrawTransform, _Script_CoreUObject::Vector2D DrawSize, _Script_CoreUObject::LinearColor DrawColor, float Duration) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugFloatHistoryLocation(_Script_CoreUObject::Object* WorldContextObject, _Script_Engine::DebugFloatHistory& FloatHistory, _Script_CoreUObject::Vector DrawLocation, _Script_CoreUObject::Vector2D DrawSize, _Script_CoreUObject::LinearColor DrawColor, float Duration) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugCylinder(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, int32_t Segments, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugCone(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector origin, _Script_CoreUObject::Vector Direction, float Length, float AngleWidth, float AngleHeight, int32_t NumSides, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugCircle(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Center, float Radius, int32_t NumSegments, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness, _Script_CoreUObject::Vector YAxis, _Script_CoreUObject::Vector ZAxis, bool bDrawAxis) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugCapsule(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Center, float HalfHeight, float Radius, _Script_CoreUObject::Rotator Rotation, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugCamera(_Script_Engine::CameraActor* CameraActor, _Script_CoreUObject::LinearColor CameraColor, float Duration) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugBox(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Center, _Script_CoreUObject::Vector Extent, _Script_CoreUObject::LinearColor LineColor, _Script_CoreUObject::Rotator Rotation, float Duration, float Thickness) {
    return;
}
void _Script_Engine::KismetSystemLibrary::DrawDebugArrow(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector LineStart, _Script_CoreUObject::Vector LineEnd, float ArrowSize, _Script_CoreUObject::LinearColor LineColor, float Duration, float Thickness) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::DoesImplementInterface(_Script_CoreUObject::Object* TestObject, void* Interface) {
    return;
}
void _Script_Engine::KismetSystemLibrary::Delay(_Script_CoreUObject::Object* WorldContextObject, float Duration, _Script_Engine::LatentActionInfo LatentInfo) {
    return;
}
void _Script_Engine::KismetSystemLibrary::CreateCopyForUndoBuffer(_Script_CoreUObject::Object* ObjectToModify) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::ConvertToRelativePath(void* Filename) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::ConvertToAbsolutePath(void* Filename) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::Conv_SoftObjectPathToSoftObjectReference(_Script_CoreUObject::SoftObjectPath& SoftObjectPath) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::Conv_SoftClassReferenceToString(void*& SoftClassReference) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::Conv_SoftClassReferenceToClass(void*& SoftClass) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::Conv_SoftClassPathToSoftClassReference(_Script_CoreUObject::SoftClassPath& SoftClassPath) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::Conv_PrimaryAssetIdToString(_Script_CoreUObject::PrimaryAssetId PrimaryAssetId) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::Conv_ObjectToSoftObjectReference(_Script_CoreUObject::Object* Object) {
    return;
}
_Script_CoreUObject::Object* _Script_Engine::KismetSystemLibrary::Conv_InterfaceToObject(void*& Interface) {
    return;
}
void* _Script_Engine::KismetSystemLibrary::Conv_ClassToSoftClassReference(void*& Class) {
    return;
}
void _Script_Engine::KismetSystemLibrary::ControlScreensaver(bool bAllowScreenSaver) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::ComponentOverlapComponents(_Script_Engine::PrimitiveComponent* Component, _Script_CoreUObject::Transform& ComponentTransform, void*& ObjectTypes, void* ComponentClassFilter, void*& ActorsToIgnore, void*& OutComponents) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::ComponentOverlapActors(_Script_Engine::PrimitiveComponent* Component, _Script_CoreUObject::Transform& ComponentTransform, void*& ObjectTypes, void* ActorClassFilter, void*& ActorsToIgnore, void*& OutActors) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::CapsuleTraceSingleForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, float HalfHeight, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::CapsuleTraceSingleByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, float HalfHeight, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::CapsuleTraceSingle(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, float HalfHeight, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::CapsuleTraceMultiForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, float HalfHeight, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::CapsuleTraceMultiByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, float HalfHeight, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::CapsuleTraceMulti(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, float Radius, float HalfHeight, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::CapsuleOverlapComponents(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector CapsulePos, float Radius, float HalfHeight, void*& ObjectTypes, void* ComponentClassFilter, void*& ActorsToIgnore, void*& OutComponents) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::CapsuleOverlapActors(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector CapsulePos, float Radius, float HalfHeight, void*& ObjectTypes, void* ActorClassFilter, void*& ActorsToIgnore, void*& OutActors) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::CanLaunchURL(void* URL) {
    return;
}
void _Script_Engine::KismetSystemLibrary::BreakSoftClassPath(_Script_CoreUObject::SoftClassPath InSoftClassPath, void*& PathString) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::BoxTraceSingleForObjects(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_CoreUObject::Vector HalfSize, _Script_CoreUObject::Rotator Orientation, void*& ObjectTypes, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::BoxTraceSingleByProfile(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_CoreUObject::Vector HalfSize, _Script_CoreUObject::Rotator Orientation, void* ProfileName, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::BoxTraceSingle(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_CoreUObject::Vector HalfSize, _Script_CoreUObject::Rotator Orientation, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, _Script_Engine::HitResult& OutHit, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::BoxTraceMulti(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector Start, _Script_CoreUObject::Vector End, _Script_CoreUObject::Vector HalfSize, _Script_CoreUObject::Rotator Orientation, void* TraceChannel, bool bTraceComplex, void*& ActorsToIgnore, void* DrawDebugType, void*& OutHits, bool bIgnoreSelf, _Script_CoreUObject::LinearColor TraceColor, _Script_CoreUObject::LinearColor TraceHitColor, float DrawTime) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::BoxOverlapComponents(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector BoxPos, _Script_CoreUObject::Vector Extent, void*& ObjectTypes, void* ComponentClassFilter, void*& ActorsToIgnore, void*& OutComponents) {
    return;
}
bool _Script_Engine::KismetSystemLibrary::BoxOverlapActors(_Script_CoreUObject::Object* WorldContextObject, _Script_CoreUObject::Vector BoxPos, _Script_CoreUObject::Vector BoxExtent, void*& ObjectTypes, void* ActorClassFilter, void*& ActorsToIgnore, void*& OutActors) {
    return;
}
int32_t _Script_Engine::KismetSystemLibrary::BeginTransaction(void* Context, void* Description, _Script_CoreUObject::Object* PrimaryObject) {
    return;
}
