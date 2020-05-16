/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2013-2020 Regents of the University of California.
 *
 * This file is part of ndn-cxx library (NDN C++ library with eXperimental eXtensions).
 *
 * ndn-cxx library is free software: you can redistribute it and/or modify it under the
 * terms of the GNU Lesser General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later version.
 *
 * ndn-cxx library is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 * PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.
 *
 * You should have received copies of the GNU General Public License and GNU Lesser
 * General Public License along with ndn-cxx, e.g., in COPYING.md file.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * See AUTHORS.md for complete list of ndn-cxx authors and contributors.
 */

#ifndef NDN_SECURITY_SIGNATURE_SHA256_WITH_RSA_HPP
#define NDN_SECURITY_SIGNATURE_SHA256_WITH_RSA_HPP

#include "ndn-cxx/signature.hpp"

namespace ndn {

/** @brief Represents a signature of Sha256WithRsa type
 *  @deprecated Use SignatureInfo with type SignatureSha256WithRsa instead
 *
 *  This signature type provides integrity and provenance protection using a RSA signature over a
 *  SHA-256 digest.
 */
class
#ifndef DOXYGEN // Older versions of doxygen can't parse deprecated decorators on classes
[[deprecated("use SignatureInfo with type SignatureSha256WithRsa instead")]]
#endif // DOXYGEN
SignatureSha256WithRsa : public Signature
{
public:
  /** @brief Create Sha256WithRsa signature with specified KeyLocator
   */
  explicit
  SignatureSha256WithRsa(const KeyLocator& keyLocator = KeyLocator());

  /** @brief Convert base Signature to Sha256WithRsa signature
   *  @throw Signature::Error SignatureType is not Sha256WithRsa
   */
  explicit
  SignatureSha256WithRsa(const Signature& signature);

private:
  /** @brief Prevent unsetting KeyLocator
   */
  void
  unsetKeyLocator();
};

} // namespace ndn

#endif // NDN_SECURITY_SIGNATURE_SHA256_WITH_RSA_HPP
