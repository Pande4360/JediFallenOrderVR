#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LightPropagationVolumeBlendable.hpp"
void* _Script_LightPropagationVolumeRuntime::LightPropagationVolumeBlendable::get_Settings() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_LightPropagationVolumeRuntime::LightPropagationVolumeBlendable::get_BlendWeight() {
    return *(float*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_LightPropagationVolumeRuntime::LightPropagationVolumeBlendable::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/LightPropagationVolumeRuntime.LightPropagationVolumeBlendable");
    return result;
}
