#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightMapVirtualTextureSpace.hpp"
#include "VirtualTextureSpace.hpp"
_Script_CoreUObject::Class* _Script_Engine::LightMapVirtualTextureSpace::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LightMapVirtualTextureSpace");
    return result;
}
