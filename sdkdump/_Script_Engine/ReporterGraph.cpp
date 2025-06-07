#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ReporterBase.hpp"
#include "ReporterGraph.hpp"
_Script_CoreUObject::Class* _Script_Engine::ReporterGraph::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ReporterGraph");
    return result;
}
