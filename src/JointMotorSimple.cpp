//
// Copyright (c) ZeroC, Inc. All rights reserved.
//
//
// Ice version 3.7.6
//
// <auto-generated>
//
// Generated from file `JointMotorSimple.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <JointMotorSimple.h>
#include <IceUtil/PushDisableWarnings.h>
#include <Ice/LocalException.h>
#include <Ice/ValueFactory.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/InputStream.h>
#include <Ice/OutputStream.h>
#include <Ice/LocalException.h>
#include <IceUtil/PopDisableWarnings.h>

#if defined(_MSC_VER)
#   pragma warning(disable:4458) // declaration of ... hides class member
#elif defined(__clang__)
#   pragma clang diagnostic ignored "-Wshadow"
#elif defined(__GNUC__)
#   pragma GCC diagnostic ignored "-Wshadow"
#endif

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 307
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 >= 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 6
#       error Ice patch level mismatch!
#   endif
#endif

#ifdef ICE_CPP11_MAPPING // C++11 mapping

namespace
{

const ::IceInternal::DefaultUserExceptionFactoryInit<::RoboCompJointMotorSimple::HardwareFailedException> iceC_RoboCompJointMotorSimple_HardwareFailedException_init("::RoboCompJointMotorSimple::HardwareFailedException");

const ::IceInternal::DefaultUserExceptionFactoryInit<::RoboCompJointMotorSimple::OutOfRangeException> iceC_RoboCompJointMotorSimple_OutOfRangeException_init("::RoboCompJointMotorSimple::OutOfRangeException");

const ::IceInternal::DefaultUserExceptionFactoryInit<::RoboCompJointMotorSimple::UnknownMotorException> iceC_RoboCompJointMotorSimple_UnknownMotorException_init("::RoboCompJointMotorSimple::UnknownMotorException");

const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_ids[2] =
{
    "::Ice::Object",
    "::RoboCompJointMotorSimple::JointMotorSimple"
};
const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_ops[] =
{
    "getMotorParams",
    "getMotorState",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "setPosition",
    "setVelocity",
    "setZeroPos"
};
const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorParams_name = "getMotorParams";
const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorState_name = "getMotorState";
const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_setPosition_name = "setPosition";
const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_setVelocity_name = "setVelocity";
const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_setZeroPos_name = "setZeroPos";

}

RoboCompJointMotorSimple::HardwareFailedException::~HardwareFailedException()
{
}

const ::std::string&
RoboCompJointMotorSimple::HardwareFailedException::ice_staticId()
{
    static const ::std::string typeId = "::RoboCompJointMotorSimple::HardwareFailedException";
    return typeId;
}

RoboCompJointMotorSimple::OutOfRangeException::~OutOfRangeException()
{
}

const ::std::string&
RoboCompJointMotorSimple::OutOfRangeException::ice_staticId()
{
    static const ::std::string typeId = "::RoboCompJointMotorSimple::OutOfRangeException";
    return typeId;
}

RoboCompJointMotorSimple::UnknownMotorException::~UnknownMotorException()
{
}

const ::std::string&
RoboCompJointMotorSimple::UnknownMotorException::ice_staticId()
{
    static const ::std::string typeId = "::RoboCompJointMotorSimple::UnknownMotorException";
    return typeId;
}

bool
RoboCompJointMotorSimple::JointMotorSimple::ice_isA(::std::string s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_RoboCompJointMotorSimple_JointMotorSimple_ids, iceC_RoboCompJointMotorSimple_JointMotorSimple_ids + 2, s);
}

::std::vector<::std::string>
RoboCompJointMotorSimple::JointMotorSimple::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector<::std::string>(&iceC_RoboCompJointMotorSimple_JointMotorSimple_ids[0], &iceC_RoboCompJointMotorSimple_JointMotorSimple_ids[2]);
}

::std::string
RoboCompJointMotorSimple::JointMotorSimple::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
RoboCompJointMotorSimple::JointMotorSimple::ice_staticId()
{
    static const ::std::string typeId = "::RoboCompJointMotorSimple::JointMotorSimple";
    return typeId;
}

/// \cond INTERNAL
bool
RoboCompJointMotorSimple::JointMotorSimple::_iceD_getMotorParams(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::std::string iceP_motor;
    istr->readAll(iceP_motor);
    inS.endReadParams();
    MotorParams ret = this->getMotorParams(::std::move(iceP_motor), current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
RoboCompJointMotorSimple::JointMotorSimple::_iceD_getMotorState(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::std::string iceP_motor;
    istr->readAll(iceP_motor);
    inS.endReadParams();
    MotorState ret = this->getMotorState(::std::move(iceP_motor), current);
    auto ostr = inS.startWriteParams();
    ostr->writeAll(ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
RoboCompJointMotorSimple::JointMotorSimple::_iceD_setPosition(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::std::string iceP_name;
    MotorGoalPosition iceP_goal;
    istr->readAll(iceP_name, iceP_goal);
    inS.endReadParams();
    this->setPosition(::std::move(iceP_name), ::std::move(iceP_goal), current);
    inS.writeEmptyParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
RoboCompJointMotorSimple::JointMotorSimple::_iceD_setVelocity(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::std::string iceP_name;
    MotorGoalVelocity iceP_goal;
    istr->readAll(iceP_name, iceP_goal);
    inS.endReadParams();
    this->setVelocity(::std::move(iceP_name), ::std::move(iceP_goal), current);
    inS.writeEmptyParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
RoboCompJointMotorSimple::JointMotorSimple::_iceD_setZeroPos(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::OperationMode::Normal, current.mode);
    auto istr = inS.startReadParams();
    ::std::string iceP_name;
    istr->readAll(iceP_name);
    inS.endReadParams();
    this->setZeroPos(::std::move(iceP_name), current);
    inS.writeEmptyParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
RoboCompJointMotorSimple::JointMotorSimple::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_RoboCompJointMotorSimple_JointMotorSimple_ops, iceC_RoboCompJointMotorSimple_JointMotorSimple_ops + 9, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_RoboCompJointMotorSimple_JointMotorSimple_ops)
    {
        case 0:
        {
            return _iceD_getMotorParams(in, current);
        }
        case 1:
        {
            return _iceD_getMotorState(in, current);
        }
        case 2:
        {
            return _iceD_ice_id(in, current);
        }
        case 3:
        {
            return _iceD_ice_ids(in, current);
        }
        case 4:
        {
            return _iceD_ice_isA(in, current);
        }
        case 5:
        {
            return _iceD_ice_ping(in, current);
        }
        case 6:
        {
            return _iceD_setPosition(in, current);
        }
        case 7:
        {
            return _iceD_setVelocity(in, current);
        }
        case 8:
        {
            return _iceD_setZeroPos(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}
/// \endcond

/// \cond INTERNAL
void
RoboCompJointMotorSimple::JointMotorSimplePrx::_iceI_getMotorParams(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::RoboCompJointMotorSimple::MotorParams>>& outAsync, const ::std::string& iceP_motor, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorParams_name);
    outAsync->invoke(iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorParams_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_motor);
        },
        [](const ::Ice::UserException& ex)
        {
            try
            {
                ex.ice_throw();
            }
            catch(const UnknownMotorException&)
            {
                throw;
            }
            catch(const ::Ice::UserException&)
            {
            }
        });
}
/// \endcond

/// \cond INTERNAL
void
RoboCompJointMotorSimple::JointMotorSimplePrx::_iceI_getMotorState(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<::RoboCompJointMotorSimple::MotorState>>& outAsync, const ::std::string& iceP_motor, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorState_name);
    outAsync->invoke(iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorState_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_motor);
        },
        [](const ::Ice::UserException& ex)
        {
            try
            {
                ex.ice_throw();
            }
            catch(const UnknownMotorException&)
            {
                throw;
            }
            catch(const ::Ice::UserException&)
            {
            }
        });
}
/// \endcond

/// \cond INTERNAL
void
RoboCompJointMotorSimple::JointMotorSimplePrx::_iceI_setPosition(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>& outAsync, const ::std::string& iceP_name, const MotorGoalPosition& iceP_goal, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_RoboCompJointMotorSimple_JointMotorSimple_setPosition_name);
    outAsync->invoke(iceC_RoboCompJointMotorSimple_JointMotorSimple_setPosition_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_name, iceP_goal);
        },
        [](const ::Ice::UserException& ex)
        {
            try
            {
                ex.ice_throw();
            }
            catch(const HardwareFailedException&)
            {
                throw;
            }
            catch(const UnknownMotorException&)
            {
                throw;
            }
            catch(const ::Ice::UserException&)
            {
            }
        });
}
/// \endcond

/// \cond INTERNAL
void
RoboCompJointMotorSimple::JointMotorSimplePrx::_iceI_setVelocity(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>& outAsync, const ::std::string& iceP_name, const MotorGoalVelocity& iceP_goal, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_RoboCompJointMotorSimple_JointMotorSimple_setVelocity_name);
    outAsync->invoke(iceC_RoboCompJointMotorSimple_JointMotorSimple_setVelocity_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_name, iceP_goal);
        },
        [](const ::Ice::UserException& ex)
        {
            try
            {
                ex.ice_throw();
            }
            catch(const HardwareFailedException&)
            {
                throw;
            }
            catch(const UnknownMotorException&)
            {
                throw;
            }
            catch(const ::Ice::UserException&)
            {
            }
        });
}
/// \endcond

/// \cond INTERNAL
void
RoboCompJointMotorSimple::JointMotorSimplePrx::_iceI_setZeroPos(const ::std::shared_ptr<::IceInternal::OutgoingAsyncT<void>>& outAsync, const ::std::string& iceP_name, const ::Ice::Context& context)
{
    _checkTwowayOnly(iceC_RoboCompJointMotorSimple_JointMotorSimple_setZeroPos_name);
    outAsync->invoke(iceC_RoboCompJointMotorSimple_JointMotorSimple_setZeroPos_name, ::Ice::OperationMode::Normal, ::Ice::FormatType::DefaultFormat, context,
        [&](::Ice::OutputStream* ostr)
        {
            ostr->writeAll(iceP_name);
        },
        [](const ::Ice::UserException& ex)
        {
            try
            {
                ex.ice_throw();
            }
            catch(const HardwareFailedException&)
            {
                throw;
            }
            catch(const UnknownMotorException&)
            {
                throw;
            }
            catch(const ::Ice::UserException&)
            {
            }
        });
}
/// \endcond

/// \cond INTERNAL
::std::shared_ptr<::Ice::ObjectPrx>
RoboCompJointMotorSimple::JointMotorSimplePrx::_newInstance() const
{
    return ::IceInternal::createProxy<JointMotorSimplePrx>();
}
/// \endcond

const ::std::string&
RoboCompJointMotorSimple::JointMotorSimplePrx::ice_staticId()
{
    return JointMotorSimple::ice_staticId();
}

namespace Ice
{
}

#else // C++98 mapping

namespace
{

const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorParams_name = "getMotorParams";

const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorState_name = "getMotorState";

const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_setPosition_name = "setPosition";

const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_setVelocity_name = "setVelocity";

const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_setZeroPos_name = "setZeroPos";

}

namespace
{

const ::IceInternal::DefaultUserExceptionFactoryInit< ::RoboCompJointMotorSimple::HardwareFailedException> iceC_RoboCompJointMotorSimple_HardwareFailedException_init("::RoboCompJointMotorSimple::HardwareFailedException");

}

RoboCompJointMotorSimple::HardwareFailedException::HardwareFailedException(const ::std::string& what) :
    ::Ice::UserException(),
    what(what)
{
}

#ifdef ICE_CPP11_COMPILER
RoboCompJointMotorSimple::HardwareFailedException::~HardwareFailedException()
{
}
#else
RoboCompJointMotorSimple::HardwareFailedException::~HardwareFailedException() throw()
{
}
#endif

::std::string
RoboCompJointMotorSimple::HardwareFailedException::ice_id() const
{
    return "::RoboCompJointMotorSimple::HardwareFailedException";
}

RoboCompJointMotorSimple::HardwareFailedException*
RoboCompJointMotorSimple::HardwareFailedException::ice_clone() const
{
    return new HardwareFailedException(*this);
}

void
RoboCompJointMotorSimple::HardwareFailedException::ice_throw() const
{
    throw *this;
}

/// \cond STREAM
void
RoboCompJointMotorSimple::HardwareFailedException::_writeImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice("::RoboCompJointMotorSimple::HardwareFailedException", -1, true);
    ::Ice::StreamWriter< HardwareFailedException, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
RoboCompJointMotorSimple::HardwareFailedException::_readImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    ::Ice::StreamReader< HardwareFailedException, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}
/// \endcond

namespace
{

const ::IceInternal::DefaultUserExceptionFactoryInit< ::RoboCompJointMotorSimple::OutOfRangeException> iceC_RoboCompJointMotorSimple_OutOfRangeException_init("::RoboCompJointMotorSimple::OutOfRangeException");

}

RoboCompJointMotorSimple::OutOfRangeException::OutOfRangeException(const ::std::string& what) :
    ::Ice::UserException(),
    what(what)
{
}

#ifdef ICE_CPP11_COMPILER
RoboCompJointMotorSimple::OutOfRangeException::~OutOfRangeException()
{
}
#else
RoboCompJointMotorSimple::OutOfRangeException::~OutOfRangeException() throw()
{
}
#endif

::std::string
RoboCompJointMotorSimple::OutOfRangeException::ice_id() const
{
    return "::RoboCompJointMotorSimple::OutOfRangeException";
}

RoboCompJointMotorSimple::OutOfRangeException*
RoboCompJointMotorSimple::OutOfRangeException::ice_clone() const
{
    return new OutOfRangeException(*this);
}

void
RoboCompJointMotorSimple::OutOfRangeException::ice_throw() const
{
    throw *this;
}

/// \cond STREAM
void
RoboCompJointMotorSimple::OutOfRangeException::_writeImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice("::RoboCompJointMotorSimple::OutOfRangeException", -1, true);
    ::Ice::StreamWriter< OutOfRangeException, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
RoboCompJointMotorSimple::OutOfRangeException::_readImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    ::Ice::StreamReader< OutOfRangeException, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}
/// \endcond

namespace
{

const ::IceInternal::DefaultUserExceptionFactoryInit< ::RoboCompJointMotorSimple::UnknownMotorException> iceC_RoboCompJointMotorSimple_UnknownMotorException_init("::RoboCompJointMotorSimple::UnknownMotorException");

}

RoboCompJointMotorSimple::UnknownMotorException::UnknownMotorException(const ::std::string& what) :
    ::Ice::UserException(),
    what(what)
{
}

#ifdef ICE_CPP11_COMPILER
RoboCompJointMotorSimple::UnknownMotorException::~UnknownMotorException()
{
}
#else
RoboCompJointMotorSimple::UnknownMotorException::~UnknownMotorException() throw()
{
}
#endif

::std::string
RoboCompJointMotorSimple::UnknownMotorException::ice_id() const
{
    return "::RoboCompJointMotorSimple::UnknownMotorException";
}

RoboCompJointMotorSimple::UnknownMotorException*
RoboCompJointMotorSimple::UnknownMotorException::ice_clone() const
{
    return new UnknownMotorException(*this);
}

void
RoboCompJointMotorSimple::UnknownMotorException::ice_throw() const
{
    throw *this;
}

/// \cond STREAM
void
RoboCompJointMotorSimple::UnknownMotorException::_writeImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice("::RoboCompJointMotorSimple::UnknownMotorException", -1, true);
    ::Ice::StreamWriter< UnknownMotorException, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
RoboCompJointMotorSimple::UnknownMotorException::_readImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    ::Ice::StreamReader< UnknownMotorException, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}
/// \endcond

/// \cond INTERNAL
::IceProxy::Ice::Object* ::IceProxy::RoboCompJointMotorSimple::upCast(JointMotorSimple* p) { return p; }

void
::IceProxy::RoboCompJointMotorSimple::_readProxy(::Ice::InputStream* istr, ::IceInternal::ProxyHandle< JointMotorSimple>& v)
{
    ::Ice::ObjectPrx proxy;
    istr->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new JointMotorSimple;
        v->_copyFrom(proxy);
    }
}
/// \endcond

::Ice::AsyncResultPtr
IceProxy::RoboCompJointMotorSimple::JointMotorSimple::_iceI_begin_getMotorParams(const ::std::string& iceP_motor, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorParams_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorParams_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorParams_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_motor);
        result->endWriteParams();
        result->invoke(iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorParams_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

::RoboCompJointMotorSimple::MotorParams
IceProxy::RoboCompJointMotorSimple::JointMotorSimple::end_getMotorParams(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorParams_name);
    ::RoboCompJointMotorSimple::MotorParams ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::RoboCompJointMotorSimple::UnknownMotorException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(ret);
    result->_endReadParams();
    return ret;
}

::Ice::AsyncResultPtr
IceProxy::RoboCompJointMotorSimple::JointMotorSimple::_iceI_begin_getMotorState(const ::std::string& iceP_motor, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorState_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorState_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorState_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_motor);
        result->endWriteParams();
        result->invoke(iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorState_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

::RoboCompJointMotorSimple::MotorState
IceProxy::RoboCompJointMotorSimple::JointMotorSimple::end_getMotorState(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_RoboCompJointMotorSimple_JointMotorSimple_getMotorState_name);
    ::RoboCompJointMotorSimple::MotorState ret;
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::RoboCompJointMotorSimple::UnknownMotorException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    ::Ice::InputStream* istr = result->_startReadParams();
    istr->read(ret);
    result->_endReadParams();
    return ret;
}

::Ice::AsyncResultPtr
IceProxy::RoboCompJointMotorSimple::JointMotorSimple::_iceI_begin_setPosition(const ::std::string& iceP_name, const ::RoboCompJointMotorSimple::MotorGoalPosition& iceP_goal, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_RoboCompJointMotorSimple_JointMotorSimple_setPosition_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_RoboCompJointMotorSimple_JointMotorSimple_setPosition_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_RoboCompJointMotorSimple_JointMotorSimple_setPosition_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_name);
        ostr->write(iceP_goal);
        result->endWriteParams();
        result->invoke(iceC_RoboCompJointMotorSimple_JointMotorSimple_setPosition_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::RoboCompJointMotorSimple::JointMotorSimple::end_setPosition(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_RoboCompJointMotorSimple_JointMotorSimple_setPosition_name);
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::RoboCompJointMotorSimple::HardwareFailedException&)
        {
            throw;
        }
        catch(const ::RoboCompJointMotorSimple::UnknownMotorException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    result->_readEmptyParams();
}

::Ice::AsyncResultPtr
IceProxy::RoboCompJointMotorSimple::JointMotorSimple::_iceI_begin_setVelocity(const ::std::string& iceP_name, const ::RoboCompJointMotorSimple::MotorGoalVelocity& iceP_goal, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_RoboCompJointMotorSimple_JointMotorSimple_setVelocity_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_RoboCompJointMotorSimple_JointMotorSimple_setVelocity_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_RoboCompJointMotorSimple_JointMotorSimple_setVelocity_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_name);
        ostr->write(iceP_goal);
        result->endWriteParams();
        result->invoke(iceC_RoboCompJointMotorSimple_JointMotorSimple_setVelocity_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::RoboCompJointMotorSimple::JointMotorSimple::end_setVelocity(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_RoboCompJointMotorSimple_JointMotorSimple_setVelocity_name);
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::RoboCompJointMotorSimple::HardwareFailedException&)
        {
            throw;
        }
        catch(const ::RoboCompJointMotorSimple::UnknownMotorException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    result->_readEmptyParams();
}

::Ice::AsyncResultPtr
IceProxy::RoboCompJointMotorSimple::JointMotorSimple::_iceI_begin_setZeroPos(const ::std::string& iceP_name, const ::Ice::Context& context, const ::IceInternal::CallbackBasePtr& del, const ::Ice::LocalObjectPtr& cookie, bool sync)
{
    _checkTwowayOnly(iceC_RoboCompJointMotorSimple_JointMotorSimple_setZeroPos_name, sync);
    ::IceInternal::OutgoingAsyncPtr result = new ::IceInternal::CallbackOutgoing(this, iceC_RoboCompJointMotorSimple_JointMotorSimple_setZeroPos_name, del, cookie, sync);
    try
    {
        result->prepare(iceC_RoboCompJointMotorSimple_JointMotorSimple_setZeroPos_name, ::Ice::Normal, context);
        ::Ice::OutputStream* ostr = result->startWriteParams(::Ice::DefaultFormat);
        ostr->write(iceP_name);
        result->endWriteParams();
        result->invoke(iceC_RoboCompJointMotorSimple_JointMotorSimple_setZeroPos_name);
    }
    catch(const ::Ice::Exception& ex)
    {
        result->abort(ex);
    }
    return result;
}

void
IceProxy::RoboCompJointMotorSimple::JointMotorSimple::end_setZeroPos(const ::Ice::AsyncResultPtr& result)
{
    ::Ice::AsyncResult::_check(result, this, iceC_RoboCompJointMotorSimple_JointMotorSimple_setZeroPos_name);
    if(!result->_waitForResponse())
    {
        try
        {
            result->_throwUserException();
        }
        catch(const ::RoboCompJointMotorSimple::HardwareFailedException&)
        {
            throw;
        }
        catch(const ::RoboCompJointMotorSimple::UnknownMotorException&)
        {
            throw;
        }
        catch(const ::Ice::UserException& ex)
        {
            throw ::Ice::UnknownUserException(__FILE__, __LINE__, ex.ice_id());
        }
    }
    result->_readEmptyParams();
}

/// \cond INTERNAL
::IceProxy::Ice::Object*
IceProxy::RoboCompJointMotorSimple::JointMotorSimple::_newInstance() const
{
    return new JointMotorSimple;
}
/// \endcond

const ::std::string&
IceProxy::RoboCompJointMotorSimple::JointMotorSimple::ice_staticId()
{
    return ::RoboCompJointMotorSimple::JointMotorSimple::ice_staticId();
}

RoboCompJointMotorSimple::JointMotorSimple::~JointMotorSimple()
{
}

/// \cond INTERNAL
::Ice::Object* RoboCompJointMotorSimple::upCast(JointMotorSimple* p) { return p; }

/// \endcond

namespace
{
const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_ids[2] =
{
    "::Ice::Object",
    "::RoboCompJointMotorSimple::JointMotorSimple"
};

}

bool
RoboCompJointMotorSimple::JointMotorSimple::ice_isA(const ::std::string& s, const ::Ice::Current&) const
{
    return ::std::binary_search(iceC_RoboCompJointMotorSimple_JointMotorSimple_ids, iceC_RoboCompJointMotorSimple_JointMotorSimple_ids + 2, s);
}

::std::vector< ::std::string>
RoboCompJointMotorSimple::JointMotorSimple::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&iceC_RoboCompJointMotorSimple_JointMotorSimple_ids[0], &iceC_RoboCompJointMotorSimple_JointMotorSimple_ids[2]);
}

const ::std::string&
RoboCompJointMotorSimple::JointMotorSimple::ice_id(const ::Ice::Current&) const
{
    return ice_staticId();
}

const ::std::string&
RoboCompJointMotorSimple::JointMotorSimple::ice_staticId()
{
#ifdef ICE_HAS_THREAD_SAFE_LOCAL_STATIC
    static const ::std::string typeId = "::RoboCompJointMotorSimple::JointMotorSimple";
    return typeId;
#else
    return iceC_RoboCompJointMotorSimple_JointMotorSimple_ids[1];
#endif
}

/// \cond INTERNAL
bool
RoboCompJointMotorSimple::JointMotorSimple::_iceD_getMotorParams(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::std::string iceP_motor;
    istr->read(iceP_motor);
    inS.endReadParams();
    MotorParams ret = this->getMotorParams(iceP_motor, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
RoboCompJointMotorSimple::JointMotorSimple::_iceD_getMotorState(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::std::string iceP_motor;
    istr->read(iceP_motor);
    inS.endReadParams();
    MotorState ret = this->getMotorState(iceP_motor, current);
    ::Ice::OutputStream* ostr = inS.startWriteParams();
    ostr->write(ret);
    inS.endWriteParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
RoboCompJointMotorSimple::JointMotorSimple::_iceD_setPosition(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::std::string iceP_name;
    MotorGoalPosition iceP_goal;
    istr->read(iceP_name);
    istr->read(iceP_goal);
    inS.endReadParams();
    this->setPosition(iceP_name, iceP_goal, current);
    inS.writeEmptyParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
RoboCompJointMotorSimple::JointMotorSimple::_iceD_setVelocity(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::std::string iceP_name;
    MotorGoalVelocity iceP_goal;
    istr->read(iceP_name);
    istr->read(iceP_goal);
    inS.endReadParams();
    this->setVelocity(iceP_name, iceP_goal, current);
    inS.writeEmptyParams();
    return true;
}
/// \endcond

/// \cond INTERNAL
bool
RoboCompJointMotorSimple::JointMotorSimple::_iceD_setZeroPos(::IceInternal::Incoming& inS, const ::Ice::Current& current)
{
    _iceCheckMode(::Ice::Normal, current.mode);
    ::Ice::InputStream* istr = inS.startReadParams();
    ::std::string iceP_name;
    istr->read(iceP_name);
    inS.endReadParams();
    this->setZeroPos(iceP_name, current);
    inS.writeEmptyParams();
    return true;
}
/// \endcond

namespace
{
const ::std::string iceC_RoboCompJointMotorSimple_JointMotorSimple_all[] =
{
    "getMotorParams",
    "getMotorState",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "setPosition",
    "setVelocity",
    "setZeroPos"
};

}

/// \cond INTERNAL
bool
RoboCompJointMotorSimple::JointMotorSimple::_iceDispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair<const ::std::string*, const ::std::string*> r = ::std::equal_range(iceC_RoboCompJointMotorSimple_JointMotorSimple_all, iceC_RoboCompJointMotorSimple_JointMotorSimple_all + 9, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - iceC_RoboCompJointMotorSimple_JointMotorSimple_all)
    {
        case 0:
        {
            return _iceD_getMotorParams(in, current);
        }
        case 1:
        {
            return _iceD_getMotorState(in, current);
        }
        case 2:
        {
            return _iceD_ice_id(in, current);
        }
        case 3:
        {
            return _iceD_ice_ids(in, current);
        }
        case 4:
        {
            return _iceD_ice_isA(in, current);
        }
        case 5:
        {
            return _iceD_ice_ping(in, current);
        }
        case 6:
        {
            return _iceD_setPosition(in, current);
        }
        case 7:
        {
            return _iceD_setVelocity(in, current);
        }
        case 8:
        {
            return _iceD_setZeroPos(in, current);
        }
        default:
        {
            assert(false);
            throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
        }
    }
}
/// \endcond

/// \cond STREAM
void
RoboCompJointMotorSimple::JointMotorSimple::_iceWriteImpl(::Ice::OutputStream* ostr) const
{
    ostr->startSlice(ice_staticId(), -1, true);
    ::Ice::StreamWriter< JointMotorSimple, ::Ice::OutputStream>::write(ostr, *this);
    ostr->endSlice();
}

void
RoboCompJointMotorSimple::JointMotorSimple::_iceReadImpl(::Ice::InputStream* istr)
{
    istr->startSlice();
    ::Ice::StreamReader< JointMotorSimple, ::Ice::InputStream>::read(istr, *this);
    istr->endSlice();
}
/// \endcond

/// \cond INTERNAL
void
RoboCompJointMotorSimple::_icePatchObjectPtr(JointMotorSimplePtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = JointMotorSimplePtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(JointMotorSimple::ice_staticId(), v);
    }
}
/// \endcond

namespace Ice
{
}

#endif
