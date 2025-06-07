#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "StaticMeshComponent.hpp"
namespace _Script_Engine {
struct BodySetup;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SplineMeshComponent : public StaticMeshComponent {
    private: char pad_bd0[0xa0]; public:
    void* get_SplineParams();
    void* get_SplineUpDir();
    bool get_bAllowSplineEditingPerInstance();
    void set_bAllowSplineEditingPerInstance(bool value);
    bool get_bSmoothInterpRollScale();
    void set_bSmoothInterpRollScale(bool value);
    void* get_ForwardAxis();
    float& get_SplineBoundaryMin();
    float& get_SplineBoundaryMax();
    _Script_Engine::BodySetup*& get_BodySetup();
    void* get_CachedMeshBodySetupGuid();
    bool get_bMeshDirty();
    void set_bMeshDirty(bool value);
    static _Script_CoreUObject::Class* static_class();
    void UpdateMesh();
    void SetStartTangent(_Script_CoreUObject::Vector StartTangent, bool bUpdateMesh);
    void SetStartScale(_Script_CoreUObject::Vector2D StartScale, bool bUpdateMesh);
    void SetStartRoll(float StartRoll, bool bUpdateMesh);
    void SetStartPosition(_Script_CoreUObject::Vector StartPos, bool bUpdateMesh);
    void SetStartOffset(_Script_CoreUObject::Vector2D StartOffset, bool bUpdateMesh);
    void SetStartAndEnd(_Script_CoreUObject::Vector StartPos, _Script_CoreUObject::Vector StartTangent, _Script_CoreUObject::Vector EndPos, _Script_CoreUObject::Vector EndTangent, bool bUpdateMesh);
    void SetSplineUpDir(_Script_CoreUObject::Vector& InSplineUpDir, bool bUpdateMesh);
    void SetForwardAxis(void* InForwardAxis, bool bUpdateMesh);
    void SetEndTangent(_Script_CoreUObject::Vector EndTangent, bool bUpdateMesh);
    void SetEndScale(_Script_CoreUObject::Vector2D EndScale, bool bUpdateMesh);
    void SetEndRoll(float EndRoll, bool bUpdateMesh);
    void SetEndPosition(_Script_CoreUObject::Vector EndPos, bool bUpdateMesh);
    void SetEndOffset(_Script_CoreUObject::Vector2D EndOffset, bool bUpdateMesh);
    void SetBoundaryMin(float InBoundaryMin, bool bUpdateMesh);
    void SetBoundaryMax(float InBoundaryMax, bool bUpdateMesh);
    _Script_CoreUObject::Vector GetStartTangent();
    _Script_CoreUObject::Vector2D GetStartScale();
    float GetStartRoll();
    _Script_CoreUObject::Vector GetStartPosition();
    _Script_CoreUObject::Vector2D GetStartOffset();
    _Script_CoreUObject::Vector GetSplineUpDir();
    void* GetForwardAxis();
    _Script_CoreUObject::Vector GetEndTangent();
    _Script_CoreUObject::Vector2D GetEndScale();
    float GetEndRoll();
    _Script_CoreUObject::Vector GetEndPosition();
    _Script_CoreUObject::Vector2D GetEndOffset();
    float GetBoundaryMin();
    float GetBoundaryMax();
}; // Size: 0xc70
#pragma pack(pop)
}
