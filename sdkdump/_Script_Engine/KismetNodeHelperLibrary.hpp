#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Enum;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KismetNodeHelperLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void MarkBit(int32_t& Data, int32_t Index);
    bool HasUnmarkedBit(int32_t Data, int32_t NumBits);
    bool HasMarkedBit(int32_t Data, int32_t NumBits);
    void* GetValidValue(_Script_CoreUObject::Enum* Enum, void* EnumeratorValue);
    int32_t GetUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits, bool bRandom);
    int32_t GetRandomUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits);
    int32_t GetFirstUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits);
    void* GetEnumeratorValueFromIndex(_Script_CoreUObject::Enum* Enum, void* EnumeratorIndex);
    void* GetEnumeratorUserFriendlyName(_Script_CoreUObject::Enum* Enum, void* EnumeratorValue);
    void* GetEnumeratorName(_Script_CoreUObject::Enum* Enum, void* EnumeratorValue);
    void ClearBit(int32_t& Data, int32_t Index);
    void ClearAllBits(int32_t& Data);
    bool BitIsMarked(int32_t Data, int32_t Index);
}; // Size: 0x28
#pragma pack(pop)
}
