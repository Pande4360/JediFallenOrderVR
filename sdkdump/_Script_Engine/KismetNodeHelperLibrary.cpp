#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Enum.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "KismetNodeHelperLibrary.hpp"
_Script_CoreUObject::Class* _Script_Engine::KismetNodeHelperLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KismetNodeHelperLibrary");
    return result;
}
int32_t _Script_Engine::KismetNodeHelperLibrary::GetUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits, bool bRandom) {
    return;
}
void _Script_Engine::KismetNodeHelperLibrary::MarkBit(int32_t& Data, int32_t Index) {
    return;
}
bool _Script_Engine::KismetNodeHelperLibrary::HasUnmarkedBit(int32_t Data, int32_t NumBits) {
    return;
}
bool _Script_Engine::KismetNodeHelperLibrary::HasMarkedBit(int32_t Data, int32_t NumBits) {
    return;
}
void* _Script_Engine::KismetNodeHelperLibrary::GetValidValue(_Script_CoreUObject::Enum* Enum, void* EnumeratorValue) {
    return;
}
int32_t _Script_Engine::KismetNodeHelperLibrary::GetFirstUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits) {
    return;
}
int32_t _Script_Engine::KismetNodeHelperLibrary::GetRandomUnmarkedBit(int32_t Data, int32_t StartIdx, int32_t NumBits) {
    return;
}
void* _Script_Engine::KismetNodeHelperLibrary::GetEnumeratorValueFromIndex(_Script_CoreUObject::Enum* Enum, void* EnumeratorIndex) {
    return;
}
void* _Script_Engine::KismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(_Script_CoreUObject::Enum* Enum, void* EnumeratorValue) {
    return;
}
void* _Script_Engine::KismetNodeHelperLibrary::GetEnumeratorName(_Script_CoreUObject::Enum* Enum, void* EnumeratorValue) {
    return;
}
void _Script_Engine::KismetNodeHelperLibrary::ClearBit(int32_t& Data, int32_t Index) {
    return;
}
void _Script_Engine::KismetNodeHelperLibrary::ClearAllBits(int32_t& Data) {
    return;
}
bool _Script_Engine::KismetNodeHelperLibrary::BitIsMarked(int32_t Data, int32_t Index) {
    return;
}
