#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "SlateTextureAtlasInterface.hpp"
_Script_CoreUObject::Class* _Script_Engine::SlateTextureAtlasInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SlateTextureAtlasInterface");
    return result;
}
