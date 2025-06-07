#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\FrameNumber.hpp"
#include "..\_Script_CoreUObject\FrameRate.hpp"
#include "..\_Script_CoreUObject\FrameTime.hpp"
#include "..\_Script_CoreUObject\QualifiedFrameTime.hpp"
#include "..\_Script_CoreUObject\Timecode.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "TimeManagementBlueprintLibrary.hpp"
_Script_CoreUObject::Class* _Script_TimeManagement::TimeManagementBlueprintLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TimeManagement.TimeManagementBlueprintLibrary");
    return result;
}
_Script_CoreUObject::FrameTime _Script_TimeManagement::TimeManagementBlueprintLibrary::SnapFrameTimeToRate(_Script_CoreUObject::FrameTime& SourceTime, _Script_CoreUObject::FrameRate& SourceRate, _Script_CoreUObject::FrameRate& SnapToRate) {
    return;
}
_Script_CoreUObject::FrameTime _Script_TimeManagement::TimeManagementBlueprintLibrary::TransformTime(_Script_CoreUObject::FrameTime& SourceTime, _Script_CoreUObject::FrameRate& SourceRate, _Script_CoreUObject::FrameRate& DestinationRate) {
    return;
}
_Script_CoreUObject::FrameTime _Script_TimeManagement::TimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, _Script_CoreUObject::FrameRate& FrameRate) {
    return;
}
_Script_CoreUObject::FrameNumber _Script_TimeManagement::TimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(_Script_CoreUObject::FrameNumber A, int32_t B) {
    return;
}
_Script_CoreUObject::FrameNumber _Script_TimeManagement::TimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(_Script_CoreUObject::FrameNumber A, _Script_CoreUObject::FrameNumber B) {
    return;
}
_Script_CoreUObject::FrameNumber _Script_TimeManagement::TimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(_Script_CoreUObject::FrameNumber A, int32_t B) {
    return;
}
bool _Script_TimeManagement::TimeManagementBlueprintLibrary::IsValid_MultipleOf(_Script_CoreUObject::FrameRate& InFrameRate, _Script_CoreUObject::FrameRate& OtherFramerate) {
    return;
}
float _Script_TimeManagement::TimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(_Script_CoreUObject::QualifiedFrameTime& InFrameTime) {
    return;
}
bool _Script_TimeManagement::TimeManagementBlueprintLibrary::IsValid_Framerate(_Script_CoreUObject::FrameRate& InFrameRate) {
    return;
}
_Script_CoreUObject::Timecode _Script_TimeManagement::TimeManagementBlueprintLibrary::GetTimecode() {
    return;
}
_Script_CoreUObject::FrameNumber _Script_TimeManagement::TimeManagementBlueprintLibrary::Divide_FrameNumberInteger(_Script_CoreUObject::FrameNumber A, int32_t B) {
    return;
}
void* _Script_TimeManagement::TimeManagementBlueprintLibrary::Conv_TimecodeToString(_Script_CoreUObject::Timecode& InTimecode, bool bForceSignDisplay) {
    return;
}
float _Script_TimeManagement::TimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(_Script_CoreUObject::FrameRate& InFrameRate) {
    return;
}
int32_t _Script_TimeManagement::TimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(_Script_CoreUObject::FrameNumber& InFrameNumber) {
    return;
}
_Script_CoreUObject::FrameNumber _Script_TimeManagement::TimeManagementBlueprintLibrary::Add_FrameNumberInteger(_Script_CoreUObject::FrameNumber A, int32_t B) {
    return;
}
_Script_CoreUObject::FrameNumber _Script_TimeManagement::TimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(_Script_CoreUObject::FrameNumber A, _Script_CoreUObject::FrameNumber B) {
    return;
}
