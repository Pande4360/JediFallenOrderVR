#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StreamableTextureInstance.hpp"
_Script_CoreUObject::Class* _Script_Engine::StreamableTextureInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StreamableTextureInstance");
    return result;
}
