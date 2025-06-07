#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsTopology.hpp"
void* _Script_RsTechRT::RsTopology::get_Locator() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_RsTechRT::RsTopology::get_Proximity() {
    return *(float*)((uintptr_t)this + 0xe0);
}
void* _Script_RsTechRT::RsTopology::get_Mode() {
    return (void*)((uintptr_t)this + 0xe4);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsTopology::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsTopology");
    return result;
}
