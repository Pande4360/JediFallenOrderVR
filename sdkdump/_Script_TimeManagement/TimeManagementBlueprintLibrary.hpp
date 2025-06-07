#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\FrameNumber.hpp"
#include "..\_Script_CoreUObject\FrameTime.hpp"
#include "..\_Script_CoreUObject\Timecode.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct FrameRate;
}
namespace _Script_CoreUObject {
struct QualifiedFrameTime;
}
namespace _Script_TimeManagement {
#pragma pack(push, 1)
struct TimeManagementBlueprintLibrary : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::FrameTime TransformTime(_Script_CoreUObject::FrameTime& SourceTime, _Script_CoreUObject::FrameRate& SourceRate, _Script_CoreUObject::FrameRate& DestinationRate);
    _Script_CoreUObject::FrameNumber Subtract_FrameNumberInteger(_Script_CoreUObject::FrameNumber A, int32_t B);
    _Script_CoreUObject::FrameNumber Subtract_FrameNumberFrameNumber(_Script_CoreUObject::FrameNumber A, _Script_CoreUObject::FrameNumber B);
    _Script_CoreUObject::FrameTime SnapFrameTimeToRate(_Script_CoreUObject::FrameTime& SourceTime, _Script_CoreUObject::FrameRate& SourceRate, _Script_CoreUObject::FrameRate& SnapToRate);
    _Script_CoreUObject::FrameTime Multiply_SecondsFrameRate(float TimeInSeconds, _Script_CoreUObject::FrameRate& FrameRate);
    _Script_CoreUObject::FrameNumber Multiply_FrameNumberInteger(_Script_CoreUObject::FrameNumber A, int32_t B);
    bool IsValid_MultipleOf(_Script_CoreUObject::FrameRate& InFrameRate, _Script_CoreUObject::FrameRate& OtherFramerate);
    bool IsValid_Framerate(_Script_CoreUObject::FrameRate& InFrameRate);
    _Script_CoreUObject::Timecode GetTimecode();
    _Script_CoreUObject::FrameNumber Divide_FrameNumberInteger(_Script_CoreUObject::FrameNumber A, int32_t B);
    void* Conv_TimecodeToString(_Script_CoreUObject::Timecode& InTimecode, bool bForceSignDisplay);
    float Conv_QualifiedFrameTimeToSeconds(_Script_CoreUObject::QualifiedFrameTime& InFrameTime);
    float Conv_FrameRateToSeconds(_Script_CoreUObject::FrameRate& InFrameRate);
    int32_t Conv_FrameNumberToInteger(_Script_CoreUObject::FrameNumber& InFrameNumber);
    _Script_CoreUObject::FrameNumber Add_FrameNumberInteger(_Script_CoreUObject::FrameNumber A, int32_t B);
    _Script_CoreUObject::FrameNumber Add_FrameNumberFrameNumber(_Script_CoreUObject::FrameNumber A, _Script_CoreUObject::FrameNumber B);
}; // Size: 0x28
#pragma pack(pop)
}
