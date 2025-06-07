#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "HeightVolumeFogBlendable.hpp"
void* _Script_HeightVolumeFogRuntime::HeightVolumeFogBlendable::get_Settings() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_HeightVolumeFogRuntime::HeightVolumeFogBlendable::get_BlendWeight() {
    return *(float*)((uintptr_t)this + 0xd8);
}
_Script_CoreUObject::Class* _Script_HeightVolumeFogRuntime::HeightVolumeFogBlendable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/HeightVolumeFogRuntime.HeightVolumeFogBlendable");
    return result;
}
