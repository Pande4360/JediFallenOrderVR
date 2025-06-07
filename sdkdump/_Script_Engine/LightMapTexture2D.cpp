#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightMapTexture2D.hpp"
#include "Texture2D.hpp"
_Script_CoreUObject::Class* _Script_Engine::LightMapTexture2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LightMapTexture2D");
    return result;
}
