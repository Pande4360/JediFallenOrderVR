#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithAreaLightActorTemplate.hpp"
#include "DatasmithObjectTemplate.hpp"
void* _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_LightShape() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithAreaLightActorTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithAreaLightActorTemplate");
    return result;
}
void* _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_Dimensions() {
    return (void*)((uintptr_t)this + 0x2c);
}
bool _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_bHidden() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void* _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_Color() {
    return (void*)((uintptr_t)this + 0x34);
}
float& _Script_DatasmithContent::DatasmithAreaLightActorTemplate::get_Intensity() {
    return *(float*)((uintptr_t)this + 0x44);
}
void _Script_DatasmithContent::DatasmithAreaLightActorTemplate::set_bHidden(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
