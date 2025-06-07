#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PoseLink.hpp"
#include "PoseLinkBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::PoseLink::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PoseLink");
    return result;
}
