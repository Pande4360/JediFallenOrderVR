#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightMapVirtualTexture.hpp"
#include "VirtualTexture.hpp"
int32_t& _Script_Engine::LightMapVirtualTexture::get_LayerFlags() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::LightMapVirtualTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LightMapVirtualTexture");
    return result;
}
