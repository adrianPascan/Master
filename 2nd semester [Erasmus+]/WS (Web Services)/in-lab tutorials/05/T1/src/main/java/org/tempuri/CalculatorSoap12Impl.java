
/**
 * Please modify this class to meet your needs
 * This class is not complete
 */

package org.tempuri;

import java.util.logging.Logger;
import javax.jws.WebMethod;
import javax.jws.WebParam;
import javax.jws.WebResult;
import javax.jws.WebService;
import javax.xml.bind.annotation.XmlSeeAlso;
import javax.xml.ws.RequestWrapper;
import javax.xml.ws.ResponseWrapper;

/**
 * This class was generated by Apache CXF 3.5.1
 * 2022-03-17T12:43:52.182+01:00
 * Generated source version: 3.5.1
 *
 */

@javax.jws.WebService(
                      serviceName = "Calculator",
                      portName = "CalculatorSoap12",
                      targetNamespace = "http://tempuri.org/",
                      wsdlLocation = "http://www.dneonline.com/calculator.asmx?wsdl",
                      endpointInterface = "org.tempuri.CalculatorSoap")

public class CalculatorSoap12Impl implements CalculatorSoap {

    private static final Logger LOG = Logger.getLogger(CalculatorSoap12Impl.class.getName());

    /* (non-Javadoc)
     * @see org.tempuri.CalculatorSoap#subtract(int intA, int intB)*
     */
    public int subtract(int intA, int intB) {
        LOG.info("Executing operation subtract");
        System.out.println(intA);
        System.out.println(intB);
        try {
            int _return = 103604326;
            return _return;
        } catch (java.lang.Exception ex) {
            ex.printStackTrace();
            throw new RuntimeException(ex);
        }
    }

    /* (non-Javadoc)
     * @see org.tempuri.CalculatorSoap#divide(int intA, int intB)*
     */
    public int divide(int intA, int intB) {
        LOG.info("Executing operation divide");
        System.out.println(intA);
        System.out.println(intB);
        try {
            int _return = -1577228711;
            return _return;
        } catch (java.lang.Exception ex) {
            ex.printStackTrace();
            throw new RuntimeException(ex);
        }
    }

    /* (non-Javadoc)
     * @see org.tempuri.CalculatorSoap#add(int intA, int intB)*
     */
    public int add(int intA, int intB) {
        LOG.info("Executing operation add");
        System.out.println(intA);
        System.out.println(intB);
        try {
            int _return = -615504075;
            return _return;
        } catch (java.lang.Exception ex) {
            ex.printStackTrace();
            throw new RuntimeException(ex);
        }
    }

    /* (non-Javadoc)
     * @see org.tempuri.CalculatorSoap#multiply(int intA, int intB)*
     */
    public int multiply(int intA, int intB) {
        LOG.info("Executing operation multiply");
        System.out.println(intA);
        System.out.println(intB);
        try {
            int _return = 948839059;
            return _return;
        } catch (java.lang.Exception ex) {
            ex.printStackTrace();
            throw new RuntimeException(ex);
        }
    }

}
