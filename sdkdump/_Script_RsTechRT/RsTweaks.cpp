#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "RsNuMagnitude.hpp"
#include "RsTweaks.hpp"
_Script_CoreUObject::Class* _Script_RsTechRT::RsTweaks::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsTechRT.RsTweaks");
    return result;
}
void* _Script_RsTechRT::RsTweaks::get_TweaksPath() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_RsTechRT::RsTweaks* _Script_RsTechRT::RsTweaks::GetTweaks(void* tweakName) {
    return;
}
_Script_RsTechRT::RsTweaks* _Script_RsTechRT::RsTweaks::MakeRsTweaks(void* tweaksFilePath) {
    return;
}
_Script_CoreUObject::Rotator _Script_RsTechRT::RsTweaks::GetRotator(bool& Success, void* tweakName) {
    return;
}
void* _Script_RsTechRT::RsTweaks::GetString(bool& Success, void* tweakName) {
    return;
}
_Script_CoreUObject::Vector _Script_RsTechRT::RsTweaks::GetVector(bool& Success, void* tweakName) {
    return;
}
_Script_RsTechRT::RsNuMagnitude _Script_RsTechRT::RsTweaks::GetNonUniformMagnitude(bool& Success, void* tweakName) {
    return;
}
void* _Script_RsTechRT::RsTweaks::GetNameString(bool& Success, void* tweakName) {
    return;
}
int32_t _Script_RsTechRT::RsTweaks::GetIntegerValue(bool& Success, void* tweakName) {
    return;
}
float _Script_RsTechRT::RsTweaks::GetFloatValue(bool& Success, void* tweakName) {
    return;
}
bool _Script_RsTechRT::RsTweaks::GetBooleanValue(bool& Success, void* tweakName) {
    return;
}
