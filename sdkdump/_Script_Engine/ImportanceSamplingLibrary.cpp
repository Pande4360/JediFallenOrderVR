#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "ImportanceSamplingLibrary.hpp"
#include "ImportanceTexture.hpp"
#include "Texture2D.hpp"
_Script_CoreUObject::Class* _Script_Engine::ImportanceSamplingLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ImportanceSamplingLibrary");
    return result;
}
float _Script_Engine::ImportanceSamplingLibrary::RandomSobolFloat(int32_t Index, int32_t Dimension, float Seed) {
    return;
}
void _Script_Engine::ImportanceSamplingLibrary::BreakImportanceTexture(_Script_Engine::ImportanceTexture& ImportanceTexture, _Script_Engine::Texture2D*& Texture, void*& WeightingFunc) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::ImportanceSamplingLibrary::RandomSobolCell2D(int32_t Index, int32_t NumCells, _Script_CoreUObject::Vector2D Cell, _Script_CoreUObject::Vector2D Seed) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::ImportanceSamplingLibrary::RandomSobolCell3D(int32_t Index, int32_t NumCells, _Script_CoreUObject::Vector Cell, _Script_CoreUObject::Vector Seed) {
    return;
}
float _Script_Engine::ImportanceSamplingLibrary::NextSobolFloat(int32_t Index, int32_t Dimension, float PreviousValue) {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::ImportanceSamplingLibrary::NextSobolCell3D(int32_t Index, int32_t NumCells, _Script_CoreUObject::Vector PreviousValue) {
    return;
}
_Script_CoreUObject::Vector2D _Script_Engine::ImportanceSamplingLibrary::NextSobolCell2D(int32_t Index, int32_t NumCells, _Script_CoreUObject::Vector2D PreviousValue) {
    return;
}
_Script_Engine::ImportanceTexture _Script_Engine::ImportanceSamplingLibrary::MakeImportanceTexture(_Script_Engine::Texture2D* Texture, void* WeightingFunc) {
    return;
}
void _Script_Engine::ImportanceSamplingLibrary::ImportanceSample(_Script_Engine::ImportanceTexture& Texture, _Script_CoreUObject::Vector2D& Rand, int32_t Samples, float Intensity, _Script_CoreUObject::Vector2D& SamplePosition, _Script_CoreUObject::LinearColor& SampleColor, float& SampleIntensity, float& SampleSize) {
    return;
}
