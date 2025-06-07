#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Channel.hpp"
#include "ControlChannel.hpp"
_Script_CoreUObject::Class* _Script_Engine::ControlChannel::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ControlChannel");
    return result;
}
