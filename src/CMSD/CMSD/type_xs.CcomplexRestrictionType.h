#ifndef _ALTOVA_INCLUDED_CMSD_ALTOVA_xs_ALTOVA_CcomplexRestrictionType
#define _ALTOVA_INCLUDED_CMSD_ALTOVA_xs_ALTOVA_CcomplexRestrictionType



namespace CMSD
{

namespace xs
{	

class CcomplexRestrictionType : public TypeBase
{
public:
	CMSD_EXPORT CcomplexRestrictionType(MSXML2::IXMLDOMNodePtr const& init);
	CMSD_EXPORT CcomplexRestrictionType(CcomplexRestrictionType const& init);
	void operator=(CcomplexRestrictionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CcomplexRestrictionType); }

	MemberAttribute<string_type,_altova_mi_xs_altova_CcomplexRestrictionType_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_xs_altova_CcomplexRestrictionType_altova_base, 0, 0> base;	// base CQName
	MemberElement<CannotationType, _altova_mi_xs_altova_CcomplexRestrictionType_altova_annotation> annotation;
	struct annotation { typedef Iterator<CannotationType> iterator; };
	MemberElement<xs::CgroupRef, _altova_mi_xs_altova_CcomplexRestrictionType_altova_group> group;
	struct group { typedef Iterator<xs::CgroupRef> iterator; };
	MemberElement<xs::Call, _altova_mi_xs_altova_CcomplexRestrictionType_altova_all> all;
	struct all { typedef Iterator<xs::Call> iterator; };
	MemberElement<xs::CexplicitGroup, _altova_mi_xs_altova_CcomplexRestrictionType_altova_choice> choice;
	struct choice { typedef Iterator<xs::CexplicitGroup> iterator; };
	MemberElement<xs::CexplicitGroup, _altova_mi_xs_altova_CcomplexRestrictionType_altova_sequence> sequence;
	struct sequence { typedef Iterator<xs::CexplicitGroup> iterator; };
	MemberElement<xs::ClocalSimpleType, _altova_mi_xs_altova_CcomplexRestrictionType_altova_simpleType> simpleType;
	struct simpleType { typedef Iterator<xs::ClocalSimpleType> iterator; };
	MemberElement<xs::Cfacet, _altova_mi_xs_altova_CcomplexRestrictionType_altova_minExclusive> minExclusive;
	struct minExclusive { typedef Iterator<xs::Cfacet> iterator; };
	MemberElement<xs::Cfacet, _altova_mi_xs_altova_CcomplexRestrictionType_altova_minInclusive> minInclusive;
	struct minInclusive { typedef Iterator<xs::Cfacet> iterator; };
	MemberElement<xs::Cfacet, _altova_mi_xs_altova_CcomplexRestrictionType_altova_maxExclusive> maxExclusive;
	struct maxExclusive { typedef Iterator<xs::Cfacet> iterator; };
	MemberElement<xs::Cfacet, _altova_mi_xs_altova_CcomplexRestrictionType_altova_maxInclusive> maxInclusive;
	struct maxInclusive { typedef Iterator<xs::Cfacet> iterator; };
	MemberElement<CtotalDigitsType, _altova_mi_xs_altova_CcomplexRestrictionType_altova_totalDigits> totalDigits;
	struct totalDigits { typedef Iterator<CtotalDigitsType> iterator; };
	MemberElement<xs::CnumFacet, _altova_mi_xs_altova_CcomplexRestrictionType_altova_fractionDigits> fractionDigits;
	struct fractionDigits { typedef Iterator<xs::CnumFacet> iterator; };
	MemberElement<xs::CnumFacet, _altova_mi_xs_altova_CcomplexRestrictionType_altova_length> length;
	struct length { typedef Iterator<xs::CnumFacet> iterator; };
	MemberElement<xs::CnumFacet, _altova_mi_xs_altova_CcomplexRestrictionType_altova_minLength> minLength;
	struct minLength { typedef Iterator<xs::CnumFacet> iterator; };
	MemberElement<xs::CnumFacet, _altova_mi_xs_altova_CcomplexRestrictionType_altova_maxLength> maxLength;
	struct maxLength { typedef Iterator<xs::CnumFacet> iterator; };
	MemberElement<xs::CnoFixedFacet, _altova_mi_xs_altova_CcomplexRestrictionType_altova_enumeration> enumeration;
	struct enumeration { typedef Iterator<xs::CnoFixedFacet> iterator; };
	MemberElement<CwhiteSpaceType, _altova_mi_xs_altova_CcomplexRestrictionType_altova_whiteSpace> whiteSpace;
	struct whiteSpace { typedef Iterator<CwhiteSpaceType> iterator; };
	MemberElement<CpatternType, _altova_mi_xs_altova_CcomplexRestrictionType_altova_pattern> pattern;
	struct pattern { typedef Iterator<CpatternType> iterator; };
	MemberElement<xs::Cattribute, _altova_mi_xs_altova_CcomplexRestrictionType_altova_attribute> attribute;
	struct attribute { typedef Iterator<xs::Cattribute> iterator; };
	MemberElement<xs::CattributeGroupRef, _altova_mi_xs_altova_CcomplexRestrictionType_altova_attributeGroup> attributeGroup;
	struct attributeGroup { typedef Iterator<xs::CattributeGroupRef> iterator; };
	MemberElement<xs::Cwildcard, _altova_mi_xs_altova_CcomplexRestrictionType_altova_anyAttribute> anyAttribute;
	struct anyAttribute { typedef Iterator<xs::Cwildcard> iterator; };
	CMSD_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace CMSD

#endif // _ALTOVA_INCLUDED_CMSD_ALTOVA_xs_ALTOVA_CcomplexRestrictionType