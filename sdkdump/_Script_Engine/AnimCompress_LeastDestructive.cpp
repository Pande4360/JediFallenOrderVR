#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimCompress.hpp"
#include "AnimCompress_LeastDestructive.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimCompress_LeastDestructive::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.AnimCompress_LeastDestructive");
    return result;
}
