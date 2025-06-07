#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "ImportanceTexture.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct LinearColor;
}
namespace _Script_Engine {
struct Texture2D;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ImportanceSamplingLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    float RandomSobolFloat(int32_t Index, int32_t Dimension, float Seed);
    _Script_CoreUObject::Vector RandomSobolCell3D(int32_t Index, int32_t NumCells, _Script_CoreUObject::Vector Cell, _Script_CoreUObject::Vector Seed);
    _Script_CoreUObject::Vector2D RandomSobolCell2D(int32_t Index, int32_t NumCells, _Script_CoreUObject::Vector2D Cell, _Script_CoreUObject::Vector2D Seed);
    float NextSobolFloat(int32_t Index, int32_t Dimension, float PreviousValue);
    _Script_CoreUObject::Vector NextSobolCell3D(int32_t Index, int32_t NumCells, _Script_CoreUObject::Vector PreviousValue);
    _Script_CoreUObject::Vector2D NextSobolCell2D(int32_t Index, int32_t NumCells, _Script_CoreUObject::Vector2D PreviousValue);
    _Script_Engine::ImportanceTexture MakeImportanceTexture(_Script_Engine::Texture2D* Texture, void* WeightingFunc);
    void ImportanceSample(_Script_Engine::ImportanceTexture& Texture, _Script_CoreUObject::Vector2D& Rand, int32_t Samples, float Intensity, _Script_CoreUObject::Vector2D& SamplePosition, _Script_CoreUObject::LinearColor& SampleColor, float& SampleIntensity, float& SampleSize);
    void BreakImportanceTexture(_Script_Engine::ImportanceTexture& ImportanceTexture, _Script_Engine::Texture2D*& Texture, void*& WeightingFunc);
}; // Size: 0x28
#pragma pack(pop)
}
